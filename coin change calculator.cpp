
#include <iostream>
using namespace std;


const int halfdollar = 50;
const int quarters = 25;
const int dimes = 10;
const int nickels = 5;
const int pennies = 1;

int main()
{
	
	int change = 0;

	cout << "Input change: ";
	cin >> change;

	cout << "\nHalf Dollars: " << change/halfdollar;

	change=change % halfdollar;

	cout << "\nQuarters: " << change / quarters;

	change %= quarters;

	cout << "\nDimes: " << change / dimes;

	change %= dimes;

	cout << "\nNickels: " << change / nickels;

	change %= nickels;

	cout << "\nPennies: " << change / pennies;

}
