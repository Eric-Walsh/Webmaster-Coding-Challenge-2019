#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include "Brackets.h"
#include "Functions.h"

using namespace std; 

//default constructor
Brackets::Brackets(){
    n = 0;
}
//contructor
Brackets::Brackets(int n){
    this -> n = n;
}
//
void Brackets::addBracket(string bracket){
    pair<string,Verdict> tempPair;
    tempPair.first = bracket;
    tempPair.second = NOT_CHECKED;
}

vector<Verdict> Brackets::getVerdict(){
    int testNumber = 1;
    vector<Verdict> verdictList;
    bool testResult;

    for(auto bracketPair: bracketList){
        testResult = balanceTest(bracketPair.first);
        if(testResult == true){
            bracketPair.second = YES;
        } else {
            bracketPair.second = NO;
        }
        verdictList.push_back(bracketPair.second);
        cout << "Test number " << testNumber << " completed." << endl;
        testNumber++;
    }
    return verdictList;
}