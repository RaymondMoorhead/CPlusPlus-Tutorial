# Lessons

These lessons have been written with the assumption that the reader has no prior experience programming.

The file IDs are a letter followed by two numbers, the naming convention being ```<ID>_Name``` for the main files, and ```<ID>_#_Name``` for supplementary files. The Letter in the ID is 'L' for Lessons, 'E' for Exercises, and 'P' for Practical Examples. The number in the ID is either the lesson number, or an association with a lesson number in the case of exercises and examples.

If you need to reference operators, terminology, or other fundamental material, please see the Help folder. If you don't find what you need in there, the internet is a great source (especially cplusplus.com). Important terms in the lessons are noted with single quotes (such as ```'function'```), use those terms when searching for additional information.

### To Get Started

1. Make sure you have G++ installed
   - For Linux run `sudo apt-get update` followed by `sudo apt-get install g++`in the terminal.
   - For Mac run `g++` in the terminal, and select the install option.
   - For Windows install it as part of [Cygwin](https://www.cygwin.com/), or use [this guide](https://www3.cs.stonybrook.edu/~alee/g++/g++.html).
2. View the appropriate lesson in the `Source/Lessons` folder.
   - It is highly recommended that you view and write code in an application with color coding and some level of intelligent C++ auto-completion, such as Notepad++, Sublime, or Visual Studio Code.
   - The lessons are in order, start with `L00_HelloProgramming.cpp`
3. Run the appropriate `compile` script to run the code, or the appropriate `clean` scipt to remove the generated code.


### Beyond Lessons

* See `Source/Exercises` for problems with which you can test what you've learned.
* See `Source/PracticalExamples` for instances in which certain techniques can prove quite valuable.
* Use `Source/MyCode` to compile your own custom code using the lesson's scripts.
   * Alternatively, invoke `g++` directly on the command line, using `g++ -o <my_app.exe> <my_source.cpp>`.