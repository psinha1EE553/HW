#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define PI 3.14159265359

using namespace std;

int main() {
	unsigned int no_of_sides = 3; // Start polygon with 3 sides.
	long double radius1 = 1.0;		// In radius of the Start Polygon.
	long double radius2;
	const unsigned int check_array[] = {10,100,1000,10000,100000,1000000,1000000};  
	vector<unsigned int> check_vec(check_array, check_array + sizeof(check_array) / sizeof(unsigned int)); 

	// Considering regular polygons...
	// outradius = inradius / (cos((180/n)*(PI / 180))), Where n in the formula is the number of sides of the regular polygon.

	while(no_of_sides <= 1000000) {
		radius2 = radius1 / (cos(PI / no_of_sides));
		if(binary_search(check_vec.begin(),check_vec.end(),no_of_sides)) {  // checks for n in {10,100,10^3,10^4,10^5,10^6}.
			cout << "For " << no_of_sides << "-sided polygon :\n";
			cout << "In-circle radius : " << radius1;
			cout << "\nCircumscribed-circle radius : " << radius2 << "\n\n";
		}
		radius1 = radius2;		// Switching radii.
		no_of_sides++;		// Increasing the polygon sides by 1.
	}
	

	return 0;
}