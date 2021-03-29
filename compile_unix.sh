#!/bin/bash

function standard_file_setup() {
  BIN_FOLDER=$SOURCE_FOLDER
  COMPILE_FOLDER=Compiled/$BIN_FOLDER
  EXECUTABLE=${SOURCE_FOLDER::-1}_${ID:~1:2}
  
  if [ ! -d Compiled ]; then
    mkdir Compiled
  fi
  cd Compiled
  if [ ! -d $BIN_FOLDER ]; then
    mkdir $BIN_FOLDER
  fi
  cd ..
}

echo -n "Enter The One-Letter, Two-Digit ID: "
read ID
EXTRA_SOURCE_FOLDER=""
#Exercises
if [ ${ID:0:1} = "E" ]; then
  EXTRA_SOURCE_FOLDER=Source/Exercises/Drivers/${ID}_*.cpp
  echo -n "Run your Exercise code Or the Solution(e/s): " 
  read SOL
  if [ "$SOL" = "s" ]; then
    #Solutions
    SOURCE_FOLDER=Exercises/Solutions
    COMPILE_FOLDER=Compiled/$SOURCE_FOLDER
    EXECUTABLE=Solution_$ID
    
    if [ ! -d Compiled ]; then
      mkdir Compiled
    fi
    cd Compiled
    if [ ! -d Exercises ]; then
      mkdir Exercises
    fi
    cd Exercises
    if [ ! -d Solutions ]; then
      mkdir Solutions
    fi
    cd ../..
  else
    SOURCE_FOLDER="Exercises"
    standard_file_setup
  fi
#Lessons and Practical Examples
else
  if [ ${ID:0:1} = "L" ]; then
    SOURCE_FOLDER=Lessons
  elif [ ${ID:0:1} = "P" ]; then
    SOURCE_FOLDER=PracticalExamples
  else
    echo "Invalid ID"
    exit 1
  fi
  
  standard_file_setup
fi

g++ -o $COMPILE_FOLDER/$EXECUTABLE.out Source/$SOURCE_FOLDER/${ID}_*.cpp $EXTRA_SOURCE_FOLDER

if [ $? -eq 0 ]; then
  echo "Your program has successfully compiled, here is the output:"
  $COMPILE_FOLDER/$EXECUTABLE.out
  echo "Your program returned with value: $?"
else
  echo "The program failed to compile"
  exit 1
fi
