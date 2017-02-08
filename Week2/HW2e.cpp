#include <iostream>
#include <cmath>
#include <vector>


using namespace std;
vector<unsigned long long> fibo_vec;


unsigned long long fact(int n) {
	unsigned long long fact = 1;
	while(n > 1) {
		fact *= n--;
	}
	return fact;
}

unsigned long long fact2(int n) {
	if(n <= 1)
		return 1;
	else return n * fact2(n-1);
}

void fibo(int n){
	unsigned long long a = 0, b = 1;
	cout << 1 << ", ";
	while(n > 2) {
		cout << a + b << ", ";
		b = a + b;
		a = b - a;
		n--;
	}
	cout << a + b;
}

void fibo_rec(int n) {
	if(n < 1)
		return;
	else {
		if(fibo_vec.size() < 2)
			fibo_vec.push_back(1);
		else {
			vector<unsigned long long> :: iterator fibo_itr = fibo_vec.end();
			fibo_vec.push_back(*(fibo_itr-1) + *(fibo_itr - 2));
			
		}
		fibo_rec(n - 1);
		

	}

}

void fibo2(int n) {
	fibo_rec(n);
	vector<unsigned long long> :: iterator fibo_itr;
	for(fibo_itr = fibo_vec.begin(); fibo_itr != fibo_vec.end() - 1; fibo_itr++) {
		cout << *fibo_itr << ", ";
	}
	cout << *fibo_itr;
	fibo_vec.clear();

}

void choose(int n, int c) {
	vector<unsigned long long> pascal1, pascal2;
	pascal1.push_back(1);
	pascal1.push_back(1);
	int temp = 2, i;
	vector<unsigned long long> :: iterator p1Itr;
	while(temp <= c) {
		pascal2.push_back(1);
		for(p1Itr = pascal1.begin(); p1Itr != pascal1.end() - 1; p1Itr++) {
			pascal2.push_back(*p1Itr + *(p1Itr + 1));
		}
		pascal2.push_back(1);
		temp++;
		pascal1.clear();
		for (p1Itr = pascal2.begin(); p1Itr != pascal2.end(); p1Itr++)
		{
			pascal1.push_back(*p1Itr);
		}
		pascal2.clear();
	}
	while(temp <= n){
		pascal2.push_back(1);
		for(p1Itr = pascal1.begin(), i = 0; i < pascal1.size() - 1; i++, p1Itr++) {
			pascal2.push_back(*p1Itr + *(p1Itr + 1));
		}
		temp++;
		pascal1.clear();
		for (p1Itr = pascal2.begin(); p1Itr != pascal2.end(); p1Itr++)
		{
			pascal1.push_back(*p1Itr);
		}
		pascal2.clear();
	}
	cout << *--p1Itr;
}

int main() {
	cout << fact(5) << " " << fact2(5) << endl;
	cout << fact(52) << " " << fact2(15) << endl;
	fibo(5);
	cout << endl;
	fibo2(5);
	cout << endl;
	fibo(15);
	cout << endl;
	fibo2(15);
	cout << endl;
	choose(70, 10);

	return 0;
}