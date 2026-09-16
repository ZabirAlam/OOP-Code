#include<iostream>
using namespace std;
class ABC
{
	protected:
	int x,y;
	public:
	void accept(int x,int y)
	{
	this->x=x;
	this->y=y;
	}
	void display()
	{
		cout<<"This is x:"<<x<<endl;
		cout<<"This is y:"<<y<<endl;
	}
};
 int main()
 {
 	ABC s;
 	s.accept(20,30);
 	s.display();
 	return 0;
	
 }
