// Bubble sort
#include <iostream>
using namespace std;
void B_sort(int *iaList)
{
	int i,j,iTemp, iCountCompare, iCountExchange;
	iCountCompare = 0;
	iCountExchange = 0;
	for (i=0;i< 10;i++)
	{
		for (j=0;j<10 -i ;j++)
		{
			if (iaList[j] > iaList[j+1])
			{
				iTemp = iaList[j];
				iaList[j] = iaList[j+1];
				iaList[j+1] = iTemp; 
				iCountExchange++;
			}
			iCountCompare++;
		}
	}
	cout << "Compare:" << iCountCompare << "  Exchange:" << iCountExchange <<endl;
}
main()
{
	int iaNumber[10];
	int i;
	cout << "Please input ten Numbers" << endl; 
	for (i=0;i<10;i++)
	{
		cin >> iaNumber[i];
	}
	for (i=0;i<10;i++)
	{
		cout << "iaNumber[" << i << "] = " << iaNumber[i] << endl;
	}
	B_sort(iaNumber);
	cout << "after Bubble sort" << endl;
	for (i=0;i<10;i++)
	{
		cout << "iaNumber[" << i << "] = " << iaNumber[i] << endl;
	}
}
