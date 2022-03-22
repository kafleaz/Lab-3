#include<iostream>
using namespace std;
class temp
{
    int f;
    public:
    void setdata()
    {
        cout<<"Enter the temperature in farenheit: ";
        cin>>f;
    }
    float celsius()
    {
        return ((f-32)/1.8);
    }

};
int main()
{
    temp t1;
    t1.setdata();
    cout<<"Temperature in celsius:"<< t1.celsius();
}