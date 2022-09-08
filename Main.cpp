
#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::string;
int main() {
	string x;
	cout << "what if your name\n" << "name>";
	//input name from user.
	cin >> x;
	//output the name with hello so "hello example name"
	cout << "hello " << x << "\n";

	//M O R S E

	char text[36] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1','2','3','4','5','6','7','8', '9','0' };

	string morse[36] = { ".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",
	".----","..---","...--","....-",".....","-....","--....","---..","----.","-----" };

	for (int i = 0; i < x.length(); i++) {

		if (phrase.at(i) == text[counter])
		{
			std::cout << morse[counter];
			
		}

	}


	return 0;
}


