#include<iostream>
using namespace std;
class book
{
	protected:
	string title,author_name,publication;
	int price;
	public:
		
	void accept()
	{
	cout<<"Enter Book title:";
	cin>>title;
	cout<<"Enter Book Auther Name:";
	cin>>author_name;
	cout<<"Enter Book publication:";
	cin>>publication;
	cout<<"Enter Book Price:";
	cin>>price;
	}
	void display()
	{
	cout<<"Book title:"<<title<<endl;
	cout<<"Book Author Name:"<<author_name<<endl;
	cout<<"Book publication:"<<publication<<endl;
	cout<<"Book price:"<<price<<endl;
	}
 };
   int main()
   {
   	book b,*ss;
   	ss=&b;
   	ss->accept();
   	ss->display();
   	return 0;
   	
   }
   

