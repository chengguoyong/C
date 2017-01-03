// use pointer to exchange two integers

#include <iostream>
using namespace std;

exch(int *iP1, int *iP2)
{
	int iTemp;
	
	iTemp = *iP1;
	*iP1 = *iP2;
	*iP2 = iTemp;
}
main()
{
	int iVar1, iVar2, iTemp;
	int *iP1, *iP2;
	
	cout << "a = ";
	cin >> iVar1;
	cout << endl << "b = ";
	cin >> iVar2;
	
	cout << "a = " << iVar1 << " " << &iVar1 << endl;
	cout << "b = " << iVar2 << " " << &iVar2 << endl;

	exch(&iVar1,&iVar2);
	
	cout << "a = " << iVar1 << " " << &iVar1 << endl;
	cout << "b = " << iVar2 << " " << &iVar2 << endl;
}
