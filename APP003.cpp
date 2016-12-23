//输入Pie的取值，输入半径，然后计算圆的周长和面积
 
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
