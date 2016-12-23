//Input Pie & Radius£¬Output Perimeter of Round and Area of Round
 
#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	double dR, dPie;
	cout << "Please input the radius and Pie " << endl << "Radius = ";
	cin >> dR;
	cout << "Pie = ";
	cin >> dPie;
	cout << "The Perimeter of Round is " << setiosflags(ios::fixed) << setprecision(2) << dPie * dR * 2 << endl;
	cout << "The Area of Round is " << setiosflags(ios::fixed) << setprecision(2) << dPie * dR * dR << endl;
 } 
