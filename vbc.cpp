#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_no;
    public:
    void getroll_no()
    {
     cout<<"Enter roll_no:";
     cin>>roll_no;
    }

    void showroll_no()
    {
        cout<<"roll_no:"<<roll_no<<endl;
    }
};

class test:virtual public student 
{
	protected:
    int test1;
	int test2;
    public:

    void gettest()
    {
        cout<<"Enter test1:";
		cin>>test1;
		cout<<"Enter test2:";
        cin>>test2;
    }
    void showtest()
    {
        cout<<"test1:"<<test1<<endl;
		cout<<"test2:"<<test2<<endl;
    }

};

class sports:virtual public student
{
	protected:
    float score;
    public:
     void getscore()
     {
        cout<<"Enter score:";
        cin>>score;
     }

     void showscore()
     {
        cout<<"score:"<<score<<endl;
     }

};

class total:public test,public sports
{
float total;
public:
	
   void calculate()
{

    total=test1+test2+score;
}
void show()
{
    cout<<"total_marks:"<<total<<endl;
}
};

int main()
{
    total t;
    t.getroll_no();
    t.getscore();
    t.gettest();
    t.calculate();
    t.show();
    t.showroll_no();
    t.showscore();
    t.showtest();
    
   
    return 0;
}

 


