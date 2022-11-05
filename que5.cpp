#include<iostream>
using namespace std;

class Item
{
    public:
    int item_no;
    char name[10];
    int price;
};

class Discount:public Item
{

   public:
   int discount_percentage;
   void setDetails()
   {
    cout<<"-----------------------"<<endl;
      cout<<endl<<"Enter Item Name : ";
      cin.get();
      cin.getline(name,10);
      cout<<endl<<"Enter Item No. : ";
      cin>>item_no;
      cout<<endl<<"Enter Item Price : ";
      cin>>price;
      cout<<endl<<"Enter Discount Percent : ";
      cin>>discount_percentage;
   }
   void Display()
   {
    int dcnt_price=(price*discount_percentage)/100;
       cout<<"---------------------"<<endl;
       cout<<"Item Name : "<<name<<endl;
       cout<<"Item No. : "<<item_no<<endl;
       cout<<"Item Prive : "<<price<<endl;
       cout<<"Dsicount Percent : "<<discount_percentage<<endl;
       cout<<"Discounted Price :"<<price-dcnt_price<<endl;
   }
};

int main()
{
    system("cls");
    int n,i;
    cout<<"How many items you want enter? : ";
    cin>>n;
    Discount ds[n];
    for(i=0;i<n;i++)
    {
        ds[i].setDetails();
    }
    for(i=0;i<n;i++)
    {
        ds[i].Display();
    }

    int total=0,disamn=0;
    for(i=0;i<n;i++)
    {
        total=total+ds[i].price;
        disamn=disamn+(ds[i].price*ds[i].discount_percentage)/100;
    }

    cout<<"Total Price : "<<total<<endl;
    cout<<"discount Amount : "<<disamn<<endl;
    cout<<"Payble Amount : "<<total-disamn<<endl;

    return 0;
}