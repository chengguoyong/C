//生成十个随机数，然后放到数组中，显示出来。以十做模，求出平均数，然后显示。 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	double getAve(int aiNumber[],int iSize);
	srand( (unsigned)time( NULL ) );
	
	int i,j;
	int iNumber[10];
	
	for (i=0;i<10;i++)
	{
		j = rand ();
		cout << "Rander Number:" << j << "   " << j % 10 << endl;
		iNumber[i] = j % 10; 
	}
	cout << getAve(iNumber,10);
}
double getAve(int aiNumber[],int iSize)
{
	int i;
	int iSum;
	iSum=0;
	for (i=0; i<iSize; i++)
	{
		iSum += aiNumber[i];
	}
	return double(iSum) / iSize;
}
