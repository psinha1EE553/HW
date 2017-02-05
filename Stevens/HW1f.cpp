#include <iostream>
#include <cmath>

using namespace std;

int main() {

	unsigned long int denom = 1;
	float s1 = 0, s2 = 0;

	// Forward sum
	while(1) {
		s1 += 1/pow(denom++,2);
		if(1/pow(denom,2) < 0.0000001) break;
	}
	// Value of N obtained is 3163
	// Increasing the value by 5000
	denom += 5000;

	// Backward sum
	while(denom > 0) {
		s2 += 1/pow(denom--,2);
	}

	cout << "Forward Sum Expression (sqrt(6 * s1)) : " << sqrt(6 * s1) << "\n";
	cout << "Backward Sum Expression (sqrt(6 * s2)) : " << sqrt(6 * s2) << ". This one is better (much closer to the value PI).";
	return 0;
}