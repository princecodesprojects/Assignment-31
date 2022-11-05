#include<iostream>
using namespace std;

class Base
{
   protected:
   int s1,s2,s3;
   public:
   void setMarks()
   {
      cout<<"Enter Marks of three subjects"<<endl;
      cin>>s1>>s2>>s3;
   }
};

class Derived1:public Base
{
    protected:
    int total()
    {
        int x=s1+s2+s3;
        return x;
    }
};

class Derived2:public Derived1
{
    int percentage;
    public:
    void calPercentage()
    {
        percentage=total()/3;
    }
    void display()
    {
        cout<<"Percentage = "<<percentage<<endl;
    }

};

int main()
{
    Derived2 d2;
    d2.setMarks();
    d2.calPercentage();
    d2.display();
    return 0;
}