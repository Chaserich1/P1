//Chase Richards
//CMPSCI 4280 P1
//Filename: scanner.h

#ifndef SCANNER_H
#define SCANNER_H
#include "token.h"
#include <string>
#include <fstream>
#include <map>

using namespace std;

//Scanner Function
Token scanner(ifstream& inFile, int &lineNum);

//Get Column from fsa table
int getColumn(char currCharacter);

//Get token
Token getToken(int state, string word, int lineNum);

#endif
