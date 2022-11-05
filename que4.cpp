#include<iostream>
using namespace std;

class Person
{
    protected:
   char name[20];
   char address[50];
   long long  phone_no;
};

class Employee:public Person
{
    public:
    int eno;
    char ename[20];
};

class Manager:public Employee
{
   public:
   char destination[10];
   char department_name[10];
   float basic_salary;
   
   void setDetails()
   {
      cout<<"Enter Details of Manager"<<endl;
      cout<<"-------------------------"<<endl;
      cout<<"Enter Employee No. : ";
      cin>>eno;
      cout<<endl<<"Enter Name : ";
      cin.get();
      cin.getline(ename,20);
      cout<<endl<<"Enter Address : ";
      fflush(stdin);
      cin.getline(address,50);
      cout<<endl<<"Enter phone Number : ";
      cin>>phone_no;
      cout<<endl<<"Enter Designation : ";
      fflush(stdin);
      cin.getline(destination,10);
      cout<<endl<<"Enter Department name : ";
      fflush(stdin);
      cin.getline(department_name,10);
      cout<<endl<<"Enter basic Salary : ";
      cin>>basic_salary;

   }
   void display()
   {
      cout<<eno<<endl;
      cout<<ename<<endl;
      cout<<address<<endl;
      cout<<phone_no<<endl;
      cout<<destination<<endl;
      cout<<department_name<<endl;
      cout<<basic_salary<<endl;
   }
};

int main()
{
    system("cls");
   int num,i,temp;
   
    cout<<"How many Managers you want to enter? : ";
    cin>>num;
    Manager mn[num];

    for(int i=0;i<num;i++)
    {
        mn[i].setDetails();
    }
    // for(int i=0;i<num;i++)
    // {
    //     mn[i].display();
    // }

    temp=0;

    for(i=1;i<num;i++)
    {
        if(mn[temp].basic_salary<mn[i].basic_salary)
        temp=i;
    }

    cout<<endl<<"Manager With High Salary is : "<<mn[temp].basic_salary<<endl;
    cout<<"Manager name is : "<<mn[temp].ename;

    return 0;
}