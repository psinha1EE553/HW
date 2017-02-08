#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

bool isPrime(unsigned long int input_num) {
	int i;
	for(i = 2; i <= sqrt(input_num); i++) {
		if( input_num % i == 0)
			break;
	}
	if( i > sqrt(input_num))
		return true;
	else return false;
}

int main() {
	unsigned long int input_num;
	cout << "Give a number : ";
	cin >> input_num;
	input_num = abs(input_num);
		if(isPrime(input_num))
		cout << input_num << " is a prime number.";
	else cout << input_num << " is not a prime number.";
	return 0;
}


