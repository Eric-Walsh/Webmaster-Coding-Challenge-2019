#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include "Brackets.h"
#include "Functions.h"

using namespace std; 

Brackets::Brackets(){
    n = 0;
}
Brackets::Brackets(int n){
    this -> n = n;
}
void Brackets::addBracket(string bracket){
    pair<string,Verdict> tempPair;
    tempPair.first = bracket;
    tempPair.second = NOT_CHECKED;
}
vector<Verdict> Brackets::getVerdict(){
    vector<Verdict> verdictList;
    bool testResult;
    for(auto bracketPair: bracketList){
        testResult = matchCheck(bracketPair.first);
        if(testResult == true){
            bracketPair.second = YES;
        } else {
            bracketPair.second = NO;
        }
        verdictList.push_back(bracketPair.second);
    }
    return verdictList;
}