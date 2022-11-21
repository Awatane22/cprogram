#include<iostream>
using namespace std;
class cube
{
	protected:
		int side;
	public:
		cube(int s)
		{
			side=s;
		}
		cube (cube &obj)
		{
			side=obj.side*obj.side*obj.side;
		}
		void display()
		{
			cout<<"\ Volume of Cube."<<side;
		}
};
main()
{
	 cube c1(5);
	c1.display();
	cube c2(c1);
	c2.display();
}
	


