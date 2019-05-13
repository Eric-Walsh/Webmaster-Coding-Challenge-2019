# Webmaster Coding Challenge 2019
## Running the program:
To compile the program, enter, or copy and paste, the following command into the turminal:
```sh
g++ -std=c++17 BracketsDriver.cpp Functions.cpp Brackets.cpp
```
Then, to run the program, enter: 
```sh
./a.out
```
## Inputing into the program
To input the strings into the program, you need to have an input file. I have included an input file that can be used, or you can create your own. 
I have included the following files for inputing
```text
bracket_input.txt
bracket_test.txt
```
The first file is to be used when the program propmts for an input file. The second file is to be used when prompted for an output file. Of course, you can use your own output file if you so desire.
## Known Bugs
 - entering a larg string (smaller than 1000 but larger then 400) can cause an infinite loop.
  - entering a non-number in in the file where "n" is supposed to be will cause the non-number to be considered a string and the program will try to determine if it is a balanced string (it won't be).