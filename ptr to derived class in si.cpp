#include<iostream>
using namespace std;
class student 
{
	protected:
    string Name;
    int Roll_no;
    public:
    
    void read()
    {
     cout<<"Enter student Name:";
     cin>>Name;
     cout<<"Enter student Roll_no:";
     cin>>Roll_no;
	}
	void display()
	{
	 cout<<"student Name:"<<Name<<endl;
	 cout<<"student Roll_no:"<<Roll_no<<endl;
	}
};
   class Teacher:public student
   {
   	string Name;
   	int ID;
   	public:
   	
   	void read1()
   	{
   	    cout<<"Enter Teacher Name: ";
   	    cin>>Name;
   	    cout<<"Enter Teacher ID:";
   	    cin>>ID;
	}
	void display1()
	{
		cout<<"Teacher Name:"<<Name<<endl;
		cout<<"Teacher ID:"<<ID<<endl;
	}
   };
   
   int main()
   {
   	Teacher T, *s;
   	s=&T;
   	s->read();
   	s->read1();
   	cout<<"\n---Information---\n";
   	
   	s->display();
   	s->display1();
   	
   	return 0;
   }
