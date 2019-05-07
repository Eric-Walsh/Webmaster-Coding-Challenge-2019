
#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>

using namespace std;
#ifndef BRACKETS_H
#define BRACKETS_H
enum Verdict{YES,NO, NOT_CHECKED};

class Brackets{
    public: 
    Brackets();
    Brackets(int n);
    void addBracket(string bracket);
    vector<Verdict> getVerdict();

    private:
    int n;
    vector<pair<string, Verdict>> bracketList;
    
};

#endif