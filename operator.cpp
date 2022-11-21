#include<iostream>
using namespace std;
class math
{
	int n;
	public:
		void getval(int a)
		{
			n=a;
		}
		math operator *(math &obj)
		{
			math temp;
			temp.n=n* obj.n;
			return (temp);
		}
		void display()
		{
			cout<<n;
		}
};
main()
{
	math m1,m2,revobj;
	m1.getval(10);
	m2.getval(20);
	revobj=m1*m2;
	revobj.display();
}
