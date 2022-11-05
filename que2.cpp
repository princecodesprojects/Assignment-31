#include<iostream>
using namespace std;

class Base
{
    protected:
    int a,b;
    public:
    void setNumber()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
    }
};

class Derived:public Base
{
    public:
    int c;
    void CalsulateSum()
    {
       c=a+b;
    }
    void display()
    {
        cout<<"Sum is :"<<c<<endl;
    }
};

int main()
{
    Derived d;
    d.setNumber();
    d.CalsulateSum();
    d.display();
    return 0;
}