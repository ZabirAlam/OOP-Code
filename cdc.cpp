#include<iostream>
using namespace std;
class student 
{
    protected:
    int roll_no;
    string name;
    public:

    student(int r, string zabir)
    {
	
        roll_no=1;
        name=zabir;
    }
};

class result:public student
{
    int marks;
    public:

    result(int r,string zabir,int m):student(r, zabir)
    {
        marks=412;
    }

    void display()
    {
        cout<<roll_no<<name<<marks;
    }
};
int main()
{
    result r(1,"zabir",412);
    r.display();
    return 0;
}


