#include<iostream>
using namespace std;
class Derived; 
void exchange();

class Base
{
   private:
   int a;
   public:
   void setData(int x)
  {
     a=x;
  }
   void Display()
  {
    cout<<"a= "<<a<<endl;
  }
  friend void exchange(Base &x,Derived &y);
};

class Derived
{
  private:
  int c;
  public:
  void setData(int a)
  {
     c=a;
  }
  void Display()
  {
    cout<<"c= "<<c<<endl;
  }
  friend void exchange(Base &x,Derived &y);
};

void exchange(Base &x,Derived &y)
{
    int n;
    n=x.a;
    x.a=y.c;
    y.c=n;
}

int main()
{
    system("cls");
    Base b;
    Derived d;
    b.setData(2);
    d.setData(5);
    b.Display();
    d.Display();
    exchange(b,d);
    b.Display();
    d.Display();
    return 0;
}