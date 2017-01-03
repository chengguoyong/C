// Test the String and Pointers

#include <iostream>
#include <string>

using namespace std;

main()
{
	string str1;
	string str2;
	string str3;
	
	str1 = "Hello";
	str2 = "World";
	
	str3 = str1 +" "+ str2;
	
	cout << str3 << endl ;
	cout << str3.size() << endl;
	
	int iVar1,iVar2,iVar3;
	int *ip;
	
	iVar1 = 20;
	iVar2 = 10;
	iVar3 = iVar1+iVar2;
	
	ip= &iVar1; 
	cout << iVar1 << " " <<  ip << endl;

	ip= &iVar2; 
	cout << iVar2 << " " <<  ip << endl;

	ip= &iVar3; 
	cout << iVar3 << " " <<  ip << endl;
	
}
