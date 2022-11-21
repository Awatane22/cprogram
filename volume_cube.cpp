#include<iostream>
using namespace std;
class volume
{
	private:
		int side,volume;
	public:
		void calculate(int s)
		{
			side=s;
		}
		void display()
		{
			volume=side*side*side;
			cout<<"\n The Volume Of Cube="<<volume;
		}
};
main()
{
	volume v;
	v.calculate(5);
	v.display();
}
