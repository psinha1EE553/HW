#include <iostream>

using namespace std;

int main() {
	unsigned int input_num;
	unsigned long int fact = 1;
	cout << "This programs computes factorial...\n\nPlease Give a number : ";
	cin >> input_num;
	input_num++;
	while(--input_num) {
		fact *= input_num;
	}
	cout << "Factorial of the given number is : " << fact;
	return 0;
}
