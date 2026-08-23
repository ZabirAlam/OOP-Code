#include<iostream>
using namespace std;
class Data
{
	protected:
	int a,b;
	public:
		
	void read()
	{
	  cout<<"Enter first number:";
	  cin>>a;
	  cout<<"Enter second number:";
	  cin>>b;
	}
};
class sum:public Data

{

    protected:
	int sum;
     public:		
	
	
	void add()
	{
	  sum=a+b;
	}
	void display()
	{
	  cout<<"sum:"<<sum<<endl;
	}
};
   int main()
   {
   	sum s;
   	s.read();
   	s.add();
   	s.display();
   	return 0;
   }

