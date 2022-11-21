#include<iostream>
using namespace std;
class bank
{
	public:
		string bname,baddress;
		int bcontact;
	public:
		void accept()
		{
			cout<<"\n Enter The Bank Name=";
			cin>>bname;
			cout<<"\n Enter The Bank Address=";
			cin>>bname;
			cout<<"\n Enter The  Bank contact Number=";
			cin>>bcontact;
		}
		
};
class customer :public bank
{
	public:
		string cname;
	public:
		void put()
		{
			cout<<"\n Enter The Customer Name=";
			cin>>cname;
			

		}
	
};
class type 
{
	protected:
		string atype;
		public:
			void gettype()
			{
				cout<<"\n Enter The Customer Account type=";
			cin>>atype;
			}
};
class details :public customer ,public type
{
	protected:
		int cbalance;
	public:
		void getdetails()
		{
			cout<<"\n Enter The Balance=";
			cin>>cbalance;
		}
		void display()
		{
			cout<<"\n The Bank  Name."<<bname;
			cout<<"\n The Bank  Addrress."<<bname;
			cout<<"\n The Bank  Contact No.="<<bname;
			cout<<"\n The Customer Name."<<cname;
			cout<<"\n The Customer Account Type."<<atype;
			cout<<"\n The Customer Balance."<<cbalance;
		}
};
main()
{
	details d1;
	d1.accept();
	d1.put();
	d1.gettype();
	d1.getdetails();
	d1.display();

}
