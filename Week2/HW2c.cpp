#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

void countPrimes(unsigned long long a, unsigned long long b) {
	cout << "\n\nThe prime numbers between [" << a << "," << b << "] inclusive is/are : ";
	bool none_flag = true;
	unsigned long long i , j;
	for(i = a; i <= b; i++) {
		for(j = 2; j <= sqrt(i); j++) {
			if(i % j == 0) {
				break;
			}
		}
		if(j > sqrt(i)) {
			cout << i <<" ";
			none_flag = false;
		}
	}
	if(none_flag)
		cout << "None !";
}
int main() {
	unsigned long long a,b;
	cout << "Give two numbers to find the primes in-between : ";
	cin >> a >> b;
	countPrimes(a,b);
	return 0;
}