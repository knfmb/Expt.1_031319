#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double mass, density;
	cout << "Enter the mass in grams: " << endl;
	cin >> mass;
	cout << "Enter density in grams per cubic centimeter: " << endl;
	cin >> density;
	cout << "Volume of the Object: " << mass / density << endl;
	_getch();
	return 0;

}



