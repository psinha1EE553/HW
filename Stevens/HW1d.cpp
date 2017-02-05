#include <iostream>

using namespace std;

int main() {
	float fsum1 = 0, fsum2 = 0;
	double dsum1 = 0, dsum2 = 0;
	cout << "1 + 1/2 + 1/3 + 1/4 ..... + 1/100 forward and backward in float and double....\n\n";
	for(float i = 1.0, j = 100.0; i<=100.0; i++,j--) {
		
		//Float Sum
		fsum1 += 1/i;
		fsum2 += 1/j;

		//Double Sum
		dsum1 += 1/i;
		dsum2 += 1/j;
	}

	cout << "In case of Float :\nSum1 : " << fsum1 << ", sum2 : " << fsum2 << "\nDifference : " << fsum1 - fsum2 << "\n\n";
	cout << "In case of Double :\nSum1 : " << dsum1 << ", sum2 : " << dsum2 << "\nDifference : " << dsum1 - dsum2;
	return 0;
}