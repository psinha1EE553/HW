#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm> // For reverse.
using namespace std;

int main() {
	long int input_num;
	vector<char> str;
	char *str_print;
	cout << "Please enter a number :";
	cin >> input_num;
	vector<char> :: iterator it = str.begin();
	while(input_num != 0) {
		it = str.insert(it,input_num % 10 + '0'); // To strip off the last bit, typecast it to char and push in the vector.
		input_num /= 10;
	}        
	str_print = &str[0];					
	cout << str_print << endl;
	return 0;
}