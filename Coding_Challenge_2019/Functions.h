#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include "Brackets.h"

using namespace std;
//Checks the size of length
//Post: 0<= length <= 10^3
bool sizeCheck(int length);

//Checks that the contents of the string are all brackets
//Pre: the size is between 0 and 1000
//Post: returns true if the contents oof the string are all brackets, false if they are not.
bool inputCheck(string input);

//Checks if all the brackets in the string are balanced
//Pre: string length is between 0 and 10^3 and all characters are all brackets
//Post: Returns true if all the brackets have matches
bool balanceTest(string);


//matches the front bracket with an end bracket
//Pre: the first bracket is either {, [, or (
//Post: the functions returns a matching bracket for the given front bracket;
char bracketMatch(char frontBracket);

#endif