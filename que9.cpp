#include<iostream>
using namespace std;

class Student 
{
    public:
    int id;
    string name;
};
class StudentExam:public Student   
{
  public:
  int sub1,sub2,sub3,sub4,sub5,sub6;
};

class  StudentResult:public StudentExam
{
    public:
float percent;
void calPercent()
{
    percent=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
}
void setDetails()
{
   cout<<endl<<"-----------------------------------"<<endl;
   cout<<"Enter Roll Number          : ";
   cin>>id;
   cout<<endl<<"Enter Student Name         : ";
   fflush(stdin);
   getline(cin,name);
   cout<<endl<<"Enter Marks of Subject 1         : ";
   cin>>sub1;
   cout<<endl<<"Enter Marks of Subject 2         : ";
   cin>>sub2;
   cout<<endl<<"Enter Marks of Subject 3         : ";
   cin>>sub3;
   cout<<endl<<"Enter Marks of Subject 4         : ";
   cin>>sub4;
   cout<<endl<<"Enter Marks of Subject 5         : ";
   cin>>sub5;
   cout<<endl<<"Enter Marks of Subject 6         : ";
   cin>>sub6;
   calPercent();
}

void display()
{
    cout<<"*************** Student Marklist *************"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Roll No.                 :  "<<id<<endl;
    cout<<"Student Name             :  "<<name<<endl<<endl;
    cout<<"Marks of Subject 1       :  "<<sub1<<endl;
    cout<<"Marks of Subject 2       :  "<<sub2<<endl;
    cout<<"Marks of Subject 3       :  "<<sub3<<endl;
    cout<<"Marks of Subject 4       :  "<<sub4<<endl;
    cout<<"Marks of Subject 5       :  "<<sub5<<endl;
    cout<<"Marks of Subject 6       :  "<<sub6<<endl<<endl;
    cout<<"Total Percentage         :  "<<percent<<endl;

}

};

int main()
{
system("cls");
 int n;
 cout<<"Enter No. of student you want : ";
 cin>>n;
 cout<<endl;

 StudentResult srlst[n];

 for(int i=0;i<n;i++)
 {
    srlst[i].setDetails();
 }
 for(int i=0;i<n;i++)
 {
    srlst[i].display();
 }
    return 0;
}