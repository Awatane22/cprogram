#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
		void set_x(int p)
		{
			x=p;
		}
		friend int max (A,B);
};
class B
{
	int y;
	public:
		void set_y(int q)
		{
			y=q;
		}
		friend int max (A,B);
};
int max (A a,B b)
{
	if (a.x>b.y)
	{
		return a.x;
	}
	else
	{
		return b.y;
	}
}
int main()
{
	A a;
	a.set_x(10);
	B b;
	b.set_y(30);
	cout<<max(a,b);
	
}

