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

//Checks if all the brackets in the string have matches
//Pre: string length is between 0 and 10^3
//Post: Returns true if all the brackets have matches
bool matchCheck(string);

//checks the brackets enclosed in other brackets
//Pre: the string's first and last characters are brackets of the same type and the number of characters between them is greater than 0
//Post: returns true if all the brackets inside the enclosing brackets have matches
bool enclosedCheck(string);

#endif