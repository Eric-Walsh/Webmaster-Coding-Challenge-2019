#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <exception>
#include <vector>
#include "Brackets.h"
#include "Functions.h"

using namespace std;
int main(){
    //declaring variables
   fstream fin;
   fstream fout;
   string command, inFile, outFile;
   int numStrings;
   Brackets bracketList;
   vector<Verdict> verdictList;

    do{
        cout << "Enter the input file name: ";
        cin >> inFile;
        fin.open(inFile);
        if(fin.fail()){
            cerr << "Error: could not open file. Please try again." << endl;
        }
    }while(fin.fail());

    do{
        cout << "Enter the output file name: ";
        cin >> outFile;
        fout.open(outFile);
        if(fout.fail()){
            cerr << "Error: could not open file. Please try again." << endl;
        }
    }while(fout.fail());

    fin >> numStrings;
    if(!sizeCheck(numStrings)){
        cerr << "Error: n is not between 0 and 1000. Please try again." << endl;
        return 0;
    }

    for(int i = 0; i < numStrings; i++){
        fin >> command;
        bracketList.addBracket(command);
    }

    verdictList = bracketList.getVerdict();

    for(auto verdicts: verdictList){
        if(verdicts == YES){
            fout << "YES" << endl;
        } else if (verdicts == NO){
            fout << "NO" << endl;
        }
    }

}