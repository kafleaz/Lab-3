#include<iostream>
using namespace std;
class length
{
    float f, inc;
    public:
    void setdata()
    {
        cout<<"Enter length in feet: ";
        cin>>f; 
        cout<<"Enter length in inches: ";
        cin>>inc;
    }
    float inch()
    {
        return(inc/12);
    }
    void display()
    {
        float sum;
        sum=f+inch();
        cout<<"After adding, the length is: "<<sum<<" feet";
    }
};
int main()
{
    length l1;
    l1.setdata();
    l1.display();
}