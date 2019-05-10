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

//Checks if the string is balanced
//Pre: string length is between 0 and 10^3 and all characters are all brackets
//Post: Returns true if all the test are passed
bool balanceTest(string);

//Checks if there are an equal number of open and close brackets
//Pre: the string length is between 0 and 10^3 and all characters are all brackets 
//Post: returns true if every opening bracket has a matching closing bracket
bool matchCheck(string);

//gets the close bracket that matches the given open bracket
//Pre: the input is a only a bracket
//Post: returns the matching close bracket
char bracketMatcher(char openBracket);


//Checks of each pair of brackets is balanced or its contents are balanced
//Pre: Each bracket has a pair, the string is within the size limits, and the string only consists of brackets
//Post: returns true if the string is balanced
bool balanceCheck(string);


//finds the indexes for the front and end brackets
//Pre: each bracket has a air, the string is within the size limits, and the string only consisits of brackets
//Post: places the found pairs into the vector of pairs
void indexFinder(string input, int frontBracket, vector<pair<int, int> >& indexes);



#endif