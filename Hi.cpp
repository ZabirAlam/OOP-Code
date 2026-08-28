#include<iostream>
using namespace std;
class student
{
	protected:
	string name;
	int roll_no;
	public:		
};  
   
class test:public student
{
	protected:
	float marks;
	public:
		
		void read()
		{
		cout<<"Enter student name:";
		cin>>name;
		cout<<"Enter student roll_no:";
		cin>>roll_no;
		cout<<"Enter student marks:";
		cin>>marks;
		
		}
	};
	class sports
	{
		protected:
		float score;
		public:
		void read2()
		{
		
		cout<<"Enter score:";
		cin>>score;
	}
	};
	
	class result:public test,public sports
	{
		private:
		float total;
		protected:
		public:
			
		void calculate()
		{
			 
			 total=marks+score;
		}	
		
		void display()
		{
		
		cout<<"student name:"<<name<<endl;
		cout<<"student roll_no:"<<roll_no<<endl;
		cout<<"student marks:"<<marks<<endl;
		cout<<"student score:"<<score<<endl;
		cout<<"total:"<<total<<endl;
		
		}
	};
	
	int main()
	{
		result r;
		r.read();
	    r.read2();
		r.calculate();
		r.display();
		return 0;
	}
