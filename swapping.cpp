#include<iostream>
using namespace std;
template<class T>  swap_fun(T&a,T&b)
{
	a=a+b;
	b=a-b;
	a=a-b;
};
main()
{
	float a,b;
	a=3.5;
	b=4.5;
	cout<<"\n Before Swapping a&b="<<a<<"&"<<b;
	swap_fun(a,b);
	cout<<"\n After Swapping a&b="<<a<<"&"<<b;
}
