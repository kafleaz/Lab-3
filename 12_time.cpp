#include<iostream>
using namespace std;
class time
{
    int h;
    float m;
    public:
    void datain()
    {
        cout<<"Enter the time in hour: ";
        cin>>h;
        cout<<"Enter the time in minute: ";
        cin>>m;
    }
    float minute()
    {
        return(m/60);
    }
    void display()
    {
        float sum;
        sum=h+minute();
        cout<<"The total time is: "<<sum<<" hour";
    }

};
int main()
{
    time t1;
    t1.datain();
    t1.display();
}