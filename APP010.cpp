//Print the number mod 17 =0 

#include <iostream>
#include <cmath>
using namespace std;
void mod17()
{
	int i;
	cout << "mod17" << endl;
	for (i=100;i<=999;i++)
	{
		if (i % 17 == 0)
		{
			cout << i << "  "; 
		}
	}
	cout << endl;
}
void narcissus()
{
	int i;
	cout << "narcissus" << endl;
	for (i=100;i<=999;i++)
	{
		if (i == pow(i/100,3) + pow((i - (i/100)*100)/10,3) +  pow((i - (i/10)*10),3))
		{
			cout << i << "  ";
		}
	}
	cout << endl;
}
void roundqueue()
{
	int iQueue,iCount,i;
	int iaQ[]; 
	cout << "Please input the amount of people: ";
	cin >> iQueue;
	cout << endl << "Please input the count: ";
	cin >> iCount;
	for (i=0;i<=iQueue-1;i++)
	{
		iaQ[i] = i+1;
	}
	iaQ[i+1] = 0;
	
}
main()
{
	int i;
	i = 173;
	mod17();
	narcissus();
}
