
#include <string>
#include <iostream>
#include <algorithm>
#include <windows.h>
#include "Main.h"


using std::cout; using std::string;
using std::endl; using std::cin;
using std::transform; using std::toupper;




int main() {
	
	string x;
	cout << "what if your name\n" << "$name>";
	//input name from user.
	cin >> x;
	//output the name with hello so "hello example name"
	cout << "hello " << x << "\n";

	//M O R S E

	char text[36] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1','2','3','4','5','6','7','8', '9','0' };

	string morse[36] = { ".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",
	".----","..---","...--","....-",".....","-....","--....","---..","----.","-----" };

	//convert string to upper case
	std::transform(x.begin(), x.end(), x.begin(), ::toupper);
	//holding point for the output morse code.

	string morsefied;

	//string to morse code
	for (int i = 0; i < x.length(); i++) {
		for (int j = 0; j < 36; j++) {
			if (x[i] == text[j]) {
				morsefied += morse[j];
				morsefied += " ";
			}
		}
	}


	//output morse code
	cout << morsefied << endl;

	//beep the morse code 
	for (int i = 0; i < morsefied.length(); i++) {
		if (morsefied[i] == '.') {
			Beep(800, 100);
		}
		else if (morsefied[i] == '-') {
			Beep(800, 300);
		}
		else if (morsefied[i] == ' ') {
			Sleep(300);
		}
	}

	morsif

	main();
	return 0;
}


