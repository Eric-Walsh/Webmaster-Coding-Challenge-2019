#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include "Brackets.h"
#include "Functions.h"

using namespace std; 

//Checks the size of length
//Post: 0<= length <= 10^3
bool sizeCheck(int length){
    bool lengthCheck = true;

    if(length < 0){
        lengthCheck = false;
    } else if(length > 1000){
        lengthCheck = false;
    }
    return lengthCheck;
}

//Checks that the contents of the string are all brackets
//Pre: the size is between 0 and 1000
//Post: returns true if the contents oof the string are all brackets, false if they are not.
bool inputCheck(string input){
    bool goodInput = true;

    for(int i = 0; i < input.length(); i++){
        if(input.at(i) != ('(' || ')' || '{' || '}' || '(' || ')')){
            goodInput = false;
        }
    }

    return goodInput;
}

//Checks if all the brackets in the string have matches
//Pre: string length is between 0 and 10^3 and all characters are all brackets
//Post: Returns true if all the brackets have matches
bool balanceTest(string bracketString){
    //declaration of variables
    bool balanced = true;
    int frontIndex = 0;
    int endIndex;
    char frontBracket;
    char endBracket;
    bool found = false;
    string subString; //
    //checks the length of the string
    if(!sizeCheck(bracketString.length()) || !inputCheck(bracketString)){
        balanced = false;
    }
    //checks that the first character isn't an end bracket
    if(bracketString.front() == (')' || '}' || ']')){
        balanced = false;
    }
    //while loop to check if the string is balanced
    while(frontIndex <= bracketString.length() - 1 && balanced){ 
        if(bracketString.at(frontIndex) == ('{' || '[' || '(')){//looks for first bracket
            frontBracket = bracketString.at(frontIndex);
            endBracket = bracketMatch(frontBracket);
            endIndex = frontIndex + 1;
            if(endIndex >= bracketString.length()){//not balanced if the front bracket is at the end
                balanced = false;
            } else{
                while(endIndex <= bracketString.length() - 1 && !found){ //looks for end bracket
                    if(bracketString.at(endIndex) == endBracket){
                        found = true;
                        break;
                    } else {
                        endIndex++;
                    }
                }
                if(endIndex >= bracketString.length()){ //not balanced if the end bracket isnt found
                    balanced = false;
                } else if (endIndex - frontIndex > 1){ //checks if there are brackets within the brackets
                    subString = bracketString.substr(frontIndex + 1, endIndex - (frontIndex + 1));
                    balanced = balanceTest(subString); // recursively checks if the string of brackets within the brackets are balanced
                }
            }
        }
        frontIndex = endIndex; // moves onto the section after the section just checked
        frontIndex++;
    }
    
    return balanced;
}

//matches the front bracket with an end bracket
//Pre: the first bracket is either {, [, or (
//Post: the functions returns a matching bracket for the given front bracket;
char bracketMatch(char frontBracket){
    char endBracket;
    switch (frontBracket){
        case '{':
            endBracket = '}';
            break;
        case '[':
            endBracket = ']';
            break;
        case '(':
            endBracket = ')';
            break;
    }
    return endBracket;
}

