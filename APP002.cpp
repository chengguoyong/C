//Input the Length,Width,High ; Output the volumn

#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	double dLength,dWidth,dHigh;
	cout << "Please input Length Width and High" << endl;
	cout << "Length = ";
	cin >> dLength;
	cout << endl << "Width = ";
	cin >> dWidth;
	cout << endl << "High = ";
	cin >> dHigh;
	
	cout << endl << "The volumn of cube is " << setiosflags(ios::fixed) << setprecision(2) << dLength * dWidth * dHigh << endl;
}
