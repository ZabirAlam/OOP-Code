#include<iostream>
using namespace std;
class Employee
{
	protected:
	int ID;
	public:
    
    void read()
    {
    	cout<<"Enter Employee ID:";
    	cin>>ID;
    }
    void display()
    {
    	cout<<"Employee ID:"<<ID<<endl;
	}
};

   class staff:public Employee
   {
   	string Name;
   	public:
   		
   	void read1()
   	{
   		cout<<"Enter staff Name:";
   		cin>>Name;
	}
	void display1()
	{
		cout<<"staff name:"<<Name<<endl;
	}
   };
   
   class coach:public staff
   {
   	string Name;
   	string Branch;
   	public:
   	
   	void accept()
   	{
   		cout<<"Enter coach Name:";
   		cin>>Name;
   		cout<<"Enter coach Branch:";
   		cin>>Branch;
	}
	 void show()
	 {
	 	cout<<"Coach Name:"<<Name<<endl;
	 	cout<<"Coach Branch:"<<Branch<<endl;
	}  
   };
   int main()
   {
   	coach c, *z;
   	z=&c;
   	z->read();
   	z->read1();
   	z->accept();
   	z->display();
   	z->display1();
	z->show();   	
	 return  0;   	
   	
   }
