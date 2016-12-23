//A: Input a Integer, Out the Fibonacci Number

#include <iostream>
 using namespace std;
 void fibonacci (int g)
  {
 	int i,a,b,c,iNumber;
  	a=1;
  	b=1;
 	if (iNumber < 3)
 	cout << "Please input Fibonacci Number:" ;
 	cin >> iNumber;
 	if (iNumber < 3)
  		cout << "Error, input must > 3!";
  	else
  	{ 	cout << a <<" "<< b << " ";
 		for (i=3;i<=iNumber;i++)
  		{	
  			c = b;
  			b = a + b;
  			a = c;
  			cout << b << " ";
  		}
  	}; 
 	cout << endl;
  }	 
  main()
  {
 	char cSelect;
 	cout << "Please select" << endl;
 	cout << "A Fibonacci" << endl;
 	cout << "B " << endl; 
 	cout << "0 Exit" << endl;
 	cin >> cSelect;
 	switch (cSelect)
 	{
 		case 'A': fibonacci(4);
 	};
  }

