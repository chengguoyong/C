// Count the number of diffirent type of char in a sentence
#include <iostream>
using namespace std;
main()
{
	char str[100];
	char *ptr;
	ptr = str;
	int iSum, iCap, iLow, iNum, iOth;
	iSum = iCap = iLow = iNum = iOth =0;
	cin.get(ptr,100);
	while (*ptr!=0)
	{
		iSum++;
		if (*ptr>='A' && *ptr<='Z') iCap++;
		else if (*ptr >= 'a' && *ptr <='z') iLow++;
		else if (*ptr >= '0' && *ptr <='9') iNum++;
		else iOth++;
		ptr++;
	}
	cout << "CAP = " << iCap << endl;
	cout << "Low = " << iLow << endl;
	cout << "Num = " << iNum << endl;
	cout << "Other = " << iOth << endl;
	cout << "Total = " << iSum << endl;
}
