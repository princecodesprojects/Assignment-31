#include<iostream>
using namespace std;
#include<string>

class Employee
{
    public:
   int emp_code;
   string name;
   void get()
   {
        cout<<endl<<"Employee Number   :  ";
        cin>>emp_code;
        cout<<endl<<"Employee Name   :  ";
        fflush(stdin);
        getline(cin,name);
   }
};

class Fulltime:public Employee
{
    public:
    float daily_rate;
    int number_of_days;
    int salary;
    void getData()
    {
        cout<<endl<<"Employee Daily Rate   :  ";
        cin>>daily_rate;
        cout<<endl<<"Enter No. Of Days   :  ";
        cin>>number_of_days;

    }
    void cal()
    {
        salary=daily_rate*number_of_days;
        cout<<"\n Salary : "<<salary;
    }
    void display()
    {
        cout<<"\n-----------------------------------"<<endl;
        cout<<"Employee Number     :  "<<emp_code<<endl; 
        cout<<"Employee Name       :  "<<name<<endl; 
        cout<<"Salary              :  "<<salary<<endl; 
        cout<<"Status              :  Fulltime";
        cout<<"\n-----------------------------------"<<endl;
    }
};

class Part_time: public Employee
{
    public:
    int number_of_working_hours;
    int hourly_rate;
    int salary1;
    void get1()
    {
        cout<<endl<<"Enter Hourly Rate   :  ";
        cin>>hourly_rate;
        cout<<endl<<"Enter Working Hours  :  ";
        cin>>number_of_working_hours;

    }

    void cal1()
    {
       salary1=hourly_rate*number_of_working_hours;
       cout<<"\n Salary : "<<salary1<<endl;
    }
    void display1()
    {
        cout<<"\n-----------------------------------"<<endl;
        cout<<"Employee Number     :  "<<emp_code<<endl; 
        cout<<"Employee Name       :  "<<name<<endl; 
        cout<<"Salary             :  "<<salary1<<endl; 
        cout<<"Status              :  Part time";
        cout<<"\n-----------------------------------"<<endl;
    }
};


int main()
{
  system("cls");
  int var=0,var1=0;

  Fulltime f[5];
  Part_time p[5];

  int x,i;

  while(1)
  {
     cout<<endl<<"1.Enter Record"<<endl;
     cout<<"2.Display Record"<<endl;
     cout<<"3.search Record"<<endl;
     cout<<"4.Quit"<<endl<<endl;

     cout<<"Enter Your Choice : ";
     cin>>x;

     switch(x)
     {
        case 1:int y;
               cout<<"1.Fulltime Employee"<<endl;
               cout<<"2.Part time Employee"<<endl;
               cout<<"Enter Your Choice"<<endl;
               cin>>y;
               switch(y)
               {
                  case 1:
                        f[var].get();
                        f[var].getData();
                        f[var].cal();
                        var++;
                        break;
                  case 2:
                        p[var1].get();
                        p[var1].get1();
                        p[var1].cal1();
                        var1++;
                        break;
               }
              break;
        case 2:
               for(i=0;i<var;i++)
               {
                 f[i].display();
               }
               for(i=0;i<var1;i++)
               {
                 p[i].display1();
               }
              break;
        case 3:
            int a;
            cout<<"Enter Employee No. : ";
            cin>>a;
            for(i=0;i<var;i++)
            {
                if(f[i].emp_code==a)
                {
                    f[i].display();
                }
                if(p[i].emp_code==a)
                {
                    p[i].display1();
                }
            }
              break;
        case 4:
              exit(0);
     }

  }
   
    return 0;
}