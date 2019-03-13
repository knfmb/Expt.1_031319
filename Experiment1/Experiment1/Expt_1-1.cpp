#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double boxprice, sidelineprice, premiumprice, generalprice, box, sideline, premium, general, totalbox, totalsideline, totalpremium,
		totalgeneral;

	//Prices and Tickets
	cout << "Enter Box ticket price: \n";
	cin >> boxprice;
	cout << "Enter Sideline ticket price: \n";
	cin >> sidelineprice;
	cout << "Enter Premium ticket price: \n";
	cin >> premiumprice;
	cout << "Enter General Admission Price: \n";
	cin >> generalprice;
	cout << "Number of Box ticket/s sold: \n";
	cin >> box;
	cout << "Number of Sideline ticket/s sold: \n";
	cin >> sideline;
	cout << "Number of Premium ticket/s sold: \n";
	cin >> premium;
	cout << "Number of General Admission ticket/s sold: \n";
	cin >> general;

	//Calculation
	totalbox = boxprice * box;
	totalsideline = sideline * sideline;
	totalpremium = premiumprice * premium;
	totalgeneral = general * generalprice;

	//Display
	cout << "Number of Box Tickets Sold:" << box << endl;
	cout << "Total Box Ticket Sale:" << totalbox << endl;
	cout << "Number of Sideline Tickets Sold:" << sideline << endl;
	cout << "Total Sideline Ticket Sale:" << totalsideline << endl;
	cout << "Number of Premium Tickets Sold:" << premium << endl;
	cout << "Total Premium Ticket Sale:" << totalpremium << endl;
	cout << "Number of General Admission Tickets Sold:" << general << endl;
	cout << "Total General Admission Ticket Sale:" << totalgeneral << endl;

	_getch();
	return 0;
}