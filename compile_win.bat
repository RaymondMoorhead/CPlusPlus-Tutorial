@echo off
:start
set /P id="Enter The One-Letter, Two-Digit ID: "
set sourceFolder="_INVALID_"
set extraSourceFolder=

if %id:~0,1%==L set sourceFolder=Lessons
if %id:~0,1%==E goto exercise-setup
if %id:~0,1%==P set sourceFolder=PracticalExamples
if %id:~0,1%==M set sourceFolder=MyCode
if %sourceFolder%=="_INVALID_" goto bad-id-end

:normal-setup

set binFolder=%sourceFolder%
set compileFolder=Compiled/%binFolder%
set executable=%sourceFolder:~0,-1%_%id:~1,2%
goto normal-folder-creation

:exercise-setup

set sourceFolder=Exercises
set extraSourceFolder="Source/Exercises/Drivers/%id%_*.cpp"

set /P sol="Run your Exercise code Or the Solution(e/s): "
if %sol%==e goto normal-setup

set sourceFolder=Exercises/Solutions
set compileFolder=Compiled/%sourceFolder%
set executable=Solution_%id:~1,2%

if not exist Compiled mkdir Compiled
cd Compiled
if not exist Exercises mkdir Exercises
cd Exercises
if not exist Solutions mkdir Solutions
cd ../..

goto compilation

:normal-folder-creation
if not exist Compiled mkdir Compiled
cd Compiled
if not exist %binFolder% mkdir %binFolder%
cd ..

:compilation

g++ -o "%compileFolder%/%executable%.exe" "Source/%sourceFolder%/%id%_*.cpp" %extraSourceFolder%

if not %errorlevel%==0 goto error-end

echo Your program has successfully compiled, here is the output:
"%compileFolder%/%executable%.exe"
echo Your program returned with value: %ERRORLEVEL%

pause
exit

:error-end
echo The program failed to compile
set /P retry="Recompile? (y/n)"
if %retry%==y goto compilation
exit

:bad-id-end
echo Please Insert a valid ID
goto start