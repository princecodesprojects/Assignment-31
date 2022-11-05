#include<iostream>
using namespace std;

class Person
{
   char name[10];
   int age;
   public:
   void setName()
   {
      cout<<"Enter name"<<endl;
      fflush(stdin);
      cin.getline(name,10);
   }
   void setAge()
   {
      cout<<"Enter age"<<endl;
      cin>>age;
   }
   void getName()
   {
    cout<<name<<endl;
   }
   void getAge()
   {
    cout<<age<<endl;
   }
};

class Employee:public Person
{
   private:
    int empid;
    int salary;
     
    public:
    void setEmpid()
   {
      cout<<"Enter Empid"<<endl;
      cin>>empid;
   }

    void setSalary()
   {
      cout<<"Enter Salary"<<endl;
      cin>>salary;
   }
   void getEmpid()
   {
    cout<<empid<<endl;
   }
   void getSalary()
   {
     cout<<salary<<endl;
   }

   void display()
   {
    getName();
    cout<<endl;
    getAge();
    cout<<endl;
    getEmpid();
    cout<<endl;
    getSalary();
    cout<<endl;
   }

};

int main()
{
    Employee e;
    e.setName();
    e.setAge();
    e.setEmpid();
    e.setSalary();
    e.display();
    return 0;
}