#include<iostream>
using namespace std;
class item
{
    int num, cost;
    public:
    void getdata()
    {
        cout<<"Number: ";
        cin>>num;
        cout<<"cost: ";
        cin>>cost;
    }
    void putdata()
    {
        cout<<"Number of item: "<<num<<endl;
        cout<<"Cost of the item: "<<cost<<endl;
    }
};
int main()
{
    item i1, i2;
    cout<<"Enter the data of items."<<endl;
    i1.getdata();
    i2.getdata();

    cout<<"Item details,"<<endl;
    i1.putdata();
    i2.putdata();
}