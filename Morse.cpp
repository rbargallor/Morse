//============================================================================
// Name        : Morse.cpp
// Author      : Roger Bargalló
// Version     : 1.0
// Copyright   : (C)2017
// Description : Morse Coder in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Morse.h"
using namespace std;

int main() {

	cout << "Introduce a word. To use spaces use this-> _ :"<<endl;

			string word;
			cin>>word;
			morse(word);


	return 0;
}
