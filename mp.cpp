#include<iostream>
using namespace std;
class teacher
{
	protected:
	int id;
	string name;
};

  class student 
  {
  	protected:
  	string name1;
    int roll_no;
  };
  
  class info:public teacher,public student
  
     {
	   protected:
	   public: 
  	    void accept()
	  {
	  	 cout<<"Enter techer id: ";
	  	 cin>>id;
	  	 cout<<"Enter teacher name:";
	  	 cin>>name;
	  	 cout<<"Enter student name:";
	  	 cin>>name1;
	  	 cout<<"Enter student roll_no:";
	  	 cin>>roll_no;
	  }	
	  
	  void display()
	  {
	  	cout<<"teacher id:"<<id<<endl;
	  	cout<<"teacher name:"<<name<<endl;
	  	cout<<" student name:"<<name1<<endl;
	  	cout<<"student roll_no:"<<roll_no<<endl;
	  }
  };
  
  int main()
  {
  	info i;
  	i.accept();
  	i.display();
  	return 0;
  	
  }
