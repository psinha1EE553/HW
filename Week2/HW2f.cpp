#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <numeric>

using namespace std;


void getArrayfromFile(vector<int>& array, const char* fileName) {
	ifstream ifstr;
	char str[100];
	int array_size;
	int temp_int;
	
	ifstr.open(fileName);
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
	ifstr.close();
}
int main() {

	const char fileName[] = "2f.dat";
	vector<int> array;
	double average;
	getArrayfromFile(array, fileName);
	average = accumulate(array.begin(), array.end(), 0.0) / array.size();

	cout << average;

	return 0;
}