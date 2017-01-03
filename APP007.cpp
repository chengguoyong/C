//  Output inverse String

#include <iostream>
#include <cstring>
using namespace std;

void fInverse(char *cString)
{
	int i,iLen;
	char *iP;
	iLen = strlen(cString) - 1;
	iP = cString + iLen -1;
	for (i=0;i<=iLen;i++)
	{
		cout << *iP;
		iP--;
	}
}
main()
{
	int j,k;
	char cVar, cString[10];
	j = 0;
	cout << "Please input the char" << endl;
	cin >> cString[0];
	//k = strcmp (cString[0],'0');
	while (j < 10 && char(cString[j]) != '0')
	{
		j++;
		cin >> cString[j];
	}
	fInverse(cString);
	
}
