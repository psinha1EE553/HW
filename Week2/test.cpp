#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <numeric>

using namespace std;



int main() {

	ifstream ifstr;
	char str[100];
	int array_size;
	int temp_int;
	
	vector<int> array;
	double average;

	ifstr.open("2f.dat");
	if(!ifstr.eof())
		ifstr.getline(str, 100);
	stringstream ss(str);
	ss >> array_size;

	for(vector<int> :: iterator it = array.begin(); array_size-- != 0;) {
		if(!ifstr.eof()){
			ifstr.getline(str, 100);
			stringstream ss(str);
			ss >> temp_int;
			array.push_back(temp_int);
		}
	
	}

	average = accumulate(array.begin(), array.end()) / array.size();
		
		

	
	ifstr.close();

	cout << average;

	// vector<unsigned long long> fibo_vec, temp1;
	// fibo_vec.push_back(1);
	// fibo_vec.push_back(1);
	// fibo_vec.push_back(2);
	// temp1.push_back(100);
	// temp1.push_back(200);
	// vector<unsigned long long> :: iterator itr;
	// for(itr = fibo_vec.begin(); itr != fibo_vec.end(); itr++) {
	// 	cout << *itr << " ";
	// }
	// fibo_vec.clear();
	// // fibo_vec.push_back(11);
	// // fibo_vec.push_back(11);
	// // fibo_vec.push_back(12);
	// //vector<unsigned long long> fibo_vec(temp1.begin(),temp1.end());
	// for (itr = temp1.begin(); itr != temp1.end(); itr++)
	// {
	// 	fibo_vec.push_back(*itr);
	// 	/* code */
	// }
	// for(itr = fibo_vec.begin(); itr != fibo_vec.end(); itr++) {
	// 	cout << *itr << " ";
	// }

	// // double temp = 35.74 + (0.6215 * 15) - (35.75 * (pow(15, 0.16))) + (0.4275 * (15) * (pow(15, 0.16)));
	// // cout << floor(temp) << "\n";
	// // if(ceil(temp) < 0)
	// // cout << " minus zero is less than zero" ;
	// // else cout << abs(ceil(temp));
	return 0;
}