#include <iostream>

using namespace std;

int main() {
	long unsigned int input_num;
	cout << "Give the number of terms for computing 1-To-N sum : ";
	cin >> input_num;
	long unsigned int gauss_sum, boring_sum = 0;

	// Using Gauss's Formula
	gauss_sum = (input_num * (input_num + 1)) / 2;
	cout << "Using Gauss's Formula : " << gauss_sum << endl;
	
	// Adding all the way from 1 To N
	for(int i = 1; i <= input_num; i++) {
		boring_sum += i; 
	}
	cout << "Using Loop : " << boring_sum << endl;

	if(gauss_sum == boring_sum)
		cout << "Yes, both the sums are equal !!";
	else cout << "No, the sums are not equal !!";
	return 0;
}