#include <fstream>
#include <iostream>
#include <string>
#include <ctype.h> // to_upper

int main(int argc, char** argv)
{
  std::fstream file;
  std::string user_name;
  std::string filename;
  std::string entry;
  const char* config = "Compiled/P37_Diary_configuration.config";
  bool running = true;
  
  // ***** BEGIN CONFIGURATION *****
  
  file.open(config, std::ios::in);
  
  // does the file exist AND have data in it?
  if(file.is_open() &&
     file.peek() != std::fstream::traits_type::eof())
  {
    std::getline(file, user_name);
    file.close();
  }
  // if not then we need to create it
  else
  {
    file.close();
    file.open(config, std::ios::out);
    if(file.is_open())
    {
      std::cout << "Welcome new user!\nPlease provide your name: ";
      std::getline(std::cin, user_name);
      file << user_name;
      file.close();
    }
  }
  
  // ***** END CONFIGURATION *****
  
  // now we can start the real work
  while(running)
  {
    std::cout << "Welcome " << user_name << "!" << std::endl;
    std::cout << "\tTo write a new entry, type a new file name" << std::endl;
    std::cout << "\tTo read an existing entry, type in an existing name" << std::endl;
    std::cout << "\tTo exit, type \"EXIT\"" << std::endl << std::endl;
    
    std::cout << "What is your choice: ";
    std::getline(std::cin, filename);
    
    // change the input to be all capital letters, this
    // way the choice is not case-sensitive
    for(size_t i = 0; i < filename.size(); ++i)
      filename[i] = toupper(filename[i]);
    
    if(filename.compare("EXIT") == 0)
      running = false;
    else
    {
      filename = "Compiled/" + filename;
      file.open(filename, std::ios::in);
      if(file.is_open())
      {
        // does the file have data in it?
        if(file.peek() != std::fstream::traits_type::eof())
        {
          std::cout << "Here is your entry:" << std::endl << std::endl;
          std::getline(file, entry);
          std::cout << entry;
          std::cout << std::endl << std::endl << "Press ENTER to continue..." << std::endl;
          std::getline(std::cin, entry);
          file.close();
        }
      }
      // new entry
      else
      {
        file.open(filename, std::ios::out);
        if(file.is_open())
        {
          std::cout << "Please type in your new entry, it will end when you press the ENTER key:" << std::endl << std::endl;
          std::getline(std::cin, entry);
          file << entry;
          file.close();
        }
      }
    }
  }
  
  std::cout << "Goodbye " << user_name << "!" << std::endl;
  
  return 0;
}