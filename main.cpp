//******************************************************************************
// Team #    07         CSCI 1470      Spring 2024                    Homework # 1
// Jonah Barrera
// Anthony Montalvo
//  Using your own words, write here a description of what the program does. 
// 
//******************************************************************************

#include <iostream>				// to be able to use cout
#include <typeinfo>				// to be able to use operator typeid

// Include here all the libraries that you need for your program to compile.

#include <cmath>                // to be able to use round
#include <iomanip>              // to be able to use setprecision

using namespace std;            // to be able to shorten the syntax

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main()
{
// Enter here your algorithm as a series of MEANINGFUL steps.
// Write below EACH step of the algorithm the C++ statement that implements it.

const double DOL2MEX = 17.47;          // constant variable that represents the amount of pesos you can convert from one dollar.
const double DOL2EURO = 0.94;           // constant variable that represents the amount of euros you can convert from one dollar.

double pesos;           // variable that stores the value from the input in pesos
double euros;           // variable that stores the value from the input in euros

double tDollars;        // variable that stores the total amount in dollars
double pDollars;
double eDollars;

int wholedollarsp;          // variable that stores the whole dollar amount after converting from pesos
int centdollarsp;           // variable that stores the whole cents amount after converting from pesos
int wholedollarse;          // variable that stores the whole dollar amount after converting from euros
int centdollarse;           // variable that stores the whole dollar amount after converting from euros

int wholetotal;         // variable that stores the whole dollars of the total amount
int centtotal;          // variable that stores the cents of the total amount

cout << "Mexican Peso and Euro to U.S. Dollar converter" << endl << endl;           // Outputs a title of the program the user is using

cout << "Please enter the amount in Pesos: ";           // prompts the user to enter an amount of money in pesos
cin >> pesos;                                           // gets the input from the user and stores it in euros

cout << "Please enter the amount in Euros: ";           // prompts the user to enter an amount of money in euros
cin >> euros;                                           // gets the input from the user and stores it in euros

cout << endl << endl;                                                       // Creates whitespaces for better formatting of the output
cout << "Mexican Peso and Euro to U.S. Dollar converter" << endl;           // Outputs a title of the program the user is using

pDollars = pesos / DOL2MEX;
eDollars = euros / DOL2EURO;

tDollars = pDollars + eDollars;
tDollars = round(tDollars * 100.0) / 100.0;

wholetotal = static_cast<int>(tDollars);            // converts the total into a seperate variable holding the total whole dollars
centtotal = static_cast<int>((tDollars - wholetotal) / 100);          // converts the total into a seperate variable holding the total whole cents

wholedollarsp = static_cast<int>(round(pDollars));
centdollarsp = static_cast<int>((pDollars - wholedollarsp) * 100);

wholedollarse = static_cast<int>(round(eDollars));
centdollarse = static_cast<int>((eDollars - wholedollarse) * 100);

cout << endl << fixed << setprecision(2);
cout << endl << pesos << " pesos: " << '\t' << wholedollarsp << " US dollars with " << centdollarsp << " cents" << endl;
cout << endl << euros << " euros: " << '\t' << wholedollarse << " US dollars with " << centdollarse << " cents" << endl;
cout << endl << '\t' << " total: " << '\t' << wholetotal << " US dollars with " << centtotal << " cents" << endl;

// Do NOT remove or modify the following statements

	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(DOL2MEX) == typeid(1.));			// Incorrect data type used for DOL2MEX
	test(typeid(DOL2EURO) == typeid(1.));			// Incorrect data type used for DOL2EURO
	test(typeid(euros) == typeid(1.));				// Incorrect data type used for euros
	test(typeid(pesos) == typeid(1.));				// Incorrect data type used for pesos
	test(typeid(wholedollarsp) == typeid(1));		// Incorrect data type used for wholedollarsp
	test(typeid(centdollarsp) == typeid(1));		// Incorrect data type used for centdollarsp
	test(typeid(wholedollarse) == typeid(1));		// Incorrect data type used for wholedollarse
	test(typeid(centdollarse) == typeid(1));		// Incorrect data type used for centdollarse
	test(typeid(wholetotal) == typeid(1));			// Incorrect data type used for wholetotal
	test(typeid(centtotal) == typeid(1));			// Incorrect data type used for centtotal
	if (pesos == 254.19 && euros == 48.36)			// Does not pass test 1
	{
		test(wholedollarsp == 14 && centdollarsp == 55);
		test(wholedollarse == 51 && centdollarse == 45);
		test(wholetotal == 66 && centtotal == 0);
	}
	if (pesos == 188.25 && euros == 130.00)				// Does not pass test  2
	{
		test(wholedollarsp == 10 && centdollarsp == 78);
		test(wholedollarse == 138 && centdollarse == 30);
		test(wholetotal == 149 && centtotal == 8);
	}
	if (pesos == 200.00 && euros == 200.00)			// Does not pass test  3
	{
		test(wholedollarsp == 11 && centdollarsp == 45);
		test(wholedollarse == 212 && centdollarse == 77);
		test(wholetotal == 224 && centtotal == 22);
	}
	if (pesos == 856.70 && euros == 93.07)				// Does not pass test  4
	{
		test(wholedollarsp == 49 && centdollarsp == 4);
		test(wholedollarse == 99 && centdollarse == 1);
		test(wholetotal == 148 && centtotal == 5);
	}

	return 0;
}
