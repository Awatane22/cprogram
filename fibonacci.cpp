#include<iostream>
using namespace std;
class fibonacci 
{
	
	static int a=0,b=1,i,n,c;
	public:
		void s
	
	
	cout<<"\n ****Fibonaccis Series*****.";
	
	cout<<a<<""<<b<<"";
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
	
}

cout<<"\n Enter The Range=";
	cin>>n;
