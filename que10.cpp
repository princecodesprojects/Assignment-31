#include<iostream>
using namespace std;


class  Worker
{
   protected:
 int code;
 string name;
 float salary;
  public:
void getw()
   {
      cout<<"-----------------------------"<<endl;
      cout<<"Enter Code         : ";
      cin>>code;
      cout<<endl<<"Enter Name   : ";
      fflush(stdin);
      getline(cin,name);
        cout<<endl<<"Enter Salary : ";
      cin>>salary;
   }

   void putw()
   {
       cout<<"Code  :     "<<code<<endl;
       cout<<"Name  :     "<<name<<endl;
       cout<<"Salary  :     "<<salary<<endl;
   }

};

class Officer
{
  protected:
  float DA,HRA;
  public:
  void geto()
  {
      cout<<endl<<"Enter DA     : ";
      cin>>DA;
      cout<<endl<<"Enter HRA    : ";
      cin>>HRA;
  }
  void puto()
  {
     cout<<endl<<"DA  :     "<<DA<<endl;
     cout<<"HRA  :     "<<HRA<<endl;
  }
};

class Manager:public Worker,public Officer
{
    private:
    float TA;
    float gross_salary;
    public:
   void getm()
   {
      getw();
      geto();
    
      
   }
   void putm()
   {
     putw();
     puto();
     TA=0.10*salary;
     cout<<"\n TA                 :  "<<TA;
     gross_salary=DA+HRA+TA+salary;
     cout<<"\n Gross Salary  : "<<gross_salary;
   }
   
};


int main()
{
system("cls");
int n,i;
  cout<<"Enter Manager Count : ";
  cin>>n;
  
  Manager *m;
  m=new Manager[n];
  for( i=0;i<n;i++)
  {
    //m[i].setDetails();
    cout<<endl<<"Enter Worker Information for "<<i+1<<endl;
    cout<<"-----------------------------"<<endl;
    m[i].getm();
  }
  for(int i=0;i<n;i++)
  {
    cout<<"\n-----------------------------"<<endl;
    cout<<"Manager Information"<<endl;
    cout<<"-----------------------------"<<endl;
    m[i].putm();
  }
    return 0;
}