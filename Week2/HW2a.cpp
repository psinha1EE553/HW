#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {

	const int T[] = {40,35,30,25,20,15,10,5,0,-5,-10,-15,-20,-25,-30,-35,-40,-45};
	const unsigned int V[] = {5,10,15,20,25,30,35,40,45,50,55,60};
	vector<int> T_vec(T, T + sizeof(T)/sizeof(int));
	vector<unsigned int> V_vec(V, V+ sizeof(V)/sizeof(unsigned int));

	double temp_output;
	cout << "\n\n     ";

	for(int i = 0; i < T_vec.size(); i++) {
		cout << T[i] << " ";
	}
	cout << "\n\n";
	for(vector<unsigned int> :: iterator Vitr = V_vec.begin(); Vitr != V_vec.end(); Vitr++) {
		cout << *Vitr << "   ";
		for(vector<int> :: iterator Titr = T_vec.begin(); Titr != T_vec.end(); Titr++) {
			temp_output = 35.74 + (0.6215 * *Titr) - (35.75 * (pow(*Vitr, 0.16))) + (0.4275 * (*Titr) * (pow(*Vitr, 0.16)));
			if(temp_output < 0 && temp_output > -0.5)
				cout << 0;
			else if(temp_output - floor(temp_output) < 0.5)
				cout << floor(temp_output);
			else cout << ceil(temp_output);
			cout << " ";
		}
		cout << endl;
	}
	
	
	cout << "\n\n           x-axis :-  Temprature ( Degree Farenheit ) \n";
	cout << "           y-axis :-  Velocity of the wind ( mph ) \n";
	return 0;
}