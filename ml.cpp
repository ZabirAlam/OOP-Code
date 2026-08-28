#include<iostream>
using namespace std;
class data
{
	protected:
	int p,c,m;
	public:
		
		void read()
		{
		cout<<"Enter p,c,m:";
		cin>>p>>c>>m;
		}
};
   
    class sum:public data
    {
    	protected:
    	 float p,c,m;
    	public:
    	
    	void calculate()
    	{
    	sum=p+c+m;
		}
	};
	
	class rectangle :public sum
	{
		private percentage:
		protected:
		public:
			
		void calculate()
		{
		percenatge=total*100/300;
		}
		void display()
		{
		cout<<"percentage:"<<percentage<<endl;
		}
	};
 int main()
 {
 	 percentage p;
 	 p.read();
 	 p.sum();
 	 p.calculate();
 	 return 0;
 }
