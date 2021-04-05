/*
    File Input/Output operations are the way you persist
  data between instances of your program running. You create
  and/or open a file, write some data to it, close it, and
  open it again later for reading and/or more writing.
  
    The C style way is to use the 'FILE' type and its associated
  functions, we'll be using the C++ style method with 'fstream'
  or 'file stream' objects.
*/

#include <fstream>
#include <stdio.h>

int main(int argc, char** argv)
{
  // you must provide a path relative to where your
  // program is running from. In this case it's assumed
  // you're using a script from the top-level
  const char* file_path = "Compiled/FileIO_data.bin";
  
  // here we're using a file with raw binary, not ascii characters,
  // as it will result in shorter and simpler code here
  
  std::fstream file;
  unsigned times_accessed = 0;
  
  // open a file, with the express purpose to read it in binary
  file.open(file_path, std::ios::in | std::ios::binary);
  
  // did we successfully open/create it?
  if(file.is_open())
  {
    // Does the file have anything in it? Are we not at the end?
    // NOTE: 'eof' means 'end-of-file'
    if(file.peek() != std::fstream::traits_type::eof())
      file.read((char*)&times_accessed, sizeof(times_accessed));
    
    file.close();
  }
  
  // increment the times accessed
  ++times_accessed;
  
  printf("%s has been accessed %u time(s)\n", file_path, times_accessed);
    
  // open a file, with the express purpose to wipe out
  // the current contents, and write to it in binary
  file.open(file_path, std::ios::trunc | std::ios::out | std::ios::binary);
  
  // did we successfully open/create it?
  if(file.is_open())
  {
    // add our data to it
    file.write((char*)&times_accessed, sizeof(times_accessed));
    
    file.close();
  }
  
  return 0;
}

/*
  So what happened here? 
    
    1- I open the file for binary reading, and if it doesn't exist then it is created. 
    
    2- I check to see if we're NOT at the end of the file.
    
    3- If we're not, we attempt to read sizeof(times_accessed) directly
       into times_accessed. this function only accepts characters, which
       are 1 byte in size, so a simple casting will work here.
          
    4- I close the file.
    
    5- I open the file again, this time for binary writing and 'truncation', which removes
       the data currently in it.
       
    6- I directly write out the bytes of times_accessed to the file.
    
    7- I close the file.
*/