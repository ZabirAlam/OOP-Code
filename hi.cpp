#include<iostream>
using namespace std;
class staff
{
    protected:
    int code;
    char name;
    public:

};
 class teacher:public staff
 {
    char subject;
    int experience;
    public:

    void read()
    {
        cout<<"Enter staff code,name,subject,experience:";
        cin>>code>>name>>subject>>experience;
    }
    void display()
    {
        cout<<code<<name<<subject<<experience;
    }
 } ;
 class officer:public staff
 {
    int grade;
    char department;
    public:

    void input()
    {
        cout<<"Enter officer grade,department:";
        cin>>grade>>department;

    }

    void show()
    {
        cout<<grade<<department;

    }
 };

 class typist
 {
    protected:
    float speed;
    int experience;
    public:
 };
 class regular:public typist
 {
    int salary;
    public:

    void read1 ()
    {
        cout<<"Enter speed,experience,salary:";
        cin>>speed>>experience>>salary;
    }
    void display()
    {
        cout<<speed<<experience<<salary;
    
    }
 };
 
 class casual:public typist
 {
    char daily;
    public:

    void input1()
    {
        cout<<"Enter casual daily:";
        cin>>daily;
    }
    void show();
    {
        cout<<daily;
    }
 };

 int main()
 {
    teacher t;
    t.read();
    t.display();

    officer o;
    o.input();
    o.show();

    regular r;
    r.read1();
    r.display();

    casual c;
    c.input1();
    c.show();

    return 0;

 }
 