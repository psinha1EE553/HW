#include <iostream>
using namespace std;

int main() {
	long int input_num;
	cout << "Please Give a number :";
	cin >> input_num;
	cout << "INPUT : " << input_num << "\n\nOUTPUT : ";
	cout << input_num << " ";
	if(input_num >= 1) {
		while(input_num != 1) {
			if(input_num % 2 == 1) {
				input_num *= 3;
				input_num++;
			}
			else input_num /= 2;
			cout << input_num << " ";
		}
	}
	return 0;
}