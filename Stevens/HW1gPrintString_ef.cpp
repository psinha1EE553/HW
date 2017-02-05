#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm> // For reverse.
using namespace std;

int main() {
	long unsigned int input_num;
	vector<char> str;
	char *str_print;
	cout << "Please enter a number :";
	cin >> input_num;
	while(input_num != 0) {
		str.push_back(input_num % 10 + '0'); // To strip off the last bit, typecast it to char and push in the vector.
											 // We push_back instead of inserting in front as every insertion causes
											 // the existing values in the vector, relocated which would be very expensive.
		input_num /= 10;
	}
	reverse(str.begin(),str.end());         // We get the reversed number after the above code, so we need to reverse it back.

	str_print = &str[0];					// As our vector stores only character we can take care of it using a char pointer.
	cout << str_print << endl;
	return 0;
}