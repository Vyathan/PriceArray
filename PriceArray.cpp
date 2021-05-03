//Matt Brundage II
//4/22/21
//PriceArray.cpp
//Increases prices in Array/Displays increased prices

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	//Declare Array
	double prices[10] = {4.5, 6.75, 23.0, 21.5, 5.25, 8.99, 9.99, 10.89, 3.99, 4.0};

	//Declare Variables
	double percentage = 0.0;

	//Accept User Input
	cout << "By what percentage do you wish to increase prices? ";
	cin >> percentage;
	percentage <= 100;

	//Increase the Prices

	return 0;
}	//end of main function