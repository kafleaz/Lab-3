#include<iostream>
using namespace std;
class item
{
    char name[16];
    int code;
    int price;
    public:
    void setdata()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Code: ";
        cin>>code;
        cout<<"Price: ";
        cin>>price;
    }
    void display()
    {
        cout<<"Name: "<<name <<endl;
        cout<<"Code: "<<code <<endl;
        cout<<"Price: "<<price <<endl;
    }
};
int main()
{
    item i1,i2,i3;
    cout<<"Enter the data of items."<<endl;
    i1.setdata();
    i2.setdata();
    i3.setdata();

    cout<<"The detail of items."<<endl;
    i1.display();
    i2.display();
    i3.display();

}