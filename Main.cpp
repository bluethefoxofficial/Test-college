
#include <iostream>

using std::cout;
using std::cin;
using std::string;
int main() {
	string x;
	cout << strnl("what if your name") << "name>";
	//input name from user.
	cin >> x;
	//output the name with hello so "hello example name"
	cout << "hello " << x << "\n";

	//speak out the value of x.



	return 0;
}


string strnl(string out) {
	
	string nl = out + "\n";


	return nl;
}