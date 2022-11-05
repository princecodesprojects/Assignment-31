#include<iostream>
using namespace std;

class Customer
{
    public:
   string name;
   long long phone_number;
   void acceptc()
   {
       cout<<endl<<"Enter Customer Name           :  ";
       fflush(stdin);
       getline(cin,name);
       cout<<endl<<"Enter Customer Phone Number   :  ";
       cin>>phone_number;
   }
   void dispc()
   {
          cout<<"\n Details of Customer"<<endl;
          cout<<"\n----------------------------------"<<endl<<endl;
          cout<<"Customer Name          :    "<<name<<endl;
          cout<<"Customer Phone No.     :    "<<phone_number<<endl;
   }
};

class Depositor:public Customer
{
    public:
    long long accno;
    int balance;
    void acceptd()
    {
       cout<<endl<<"Enter Customer A/C No         :  ";
       cin>>accno;
       cout<<endl<<"Enter Balance                 :  ";
       cin>>balance;
       cout<<"\n----------------------------------"<<endl;
    }
    void dispd()
    {
         cout<<"Customer A/c No        :    "<<accno<<endl;
          cout<<"Balance                :    "<<name<<endl;
          cout<<"----------------------------------"<<endl<<endl;
    }
};

class Borrower:public Depositor
{
    public:
    int loan_no;
    int loan_amt;
    void acceptb()
    {
       cout<<endl<<"Enter Loan No                 :  ";
       cin>>loan_no;
       cout<<endl<<"Enter Loan Amount             :  ";
       cin>>loan_amt;
       cout<<endl<<"----------------------------------"<<endl<<endl;
    }   
    
   
    void dispb()
    {
          
          
          cout<<"Loan No                :    "<<loan_no<<endl;
          cout<<"Loan Amount            :    "<<loan_amt<<endl<<endl;
          cout<<endl<<"----------------------------------"<<endl<<endl;
    }
};


int main()
{
system("cls");
Borrower *b;
int n,i;
cout<<"Enter No. of customer Details you want ";
cin>>n;
b=new Borrower[n];
for(int i=0;i<n;i++)
{
    b[i].acceptc();
    b[i].acceptb();
    b[i].acceptd();
}
for(int i=0;i<n;i++)
{
    b[i].dispc();
    b[i].dispb();
    b[i].dispd();
}
for(int i=0;i<n;i++)
{
    delete(b);
}
for(int i=0;i<n;i++)
{
    b[i].dispc();
    b[i].dispb();
    b[i].dispd();
}
    return 0;
}