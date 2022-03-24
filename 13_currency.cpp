#include<iostream>
using namespace std;
class currency
{
    int rs;
    float p;
    public:
    void setdata()
    {
        cout<<"Enter the Rupee: ";
        cin>>rs;
        cout<<"Enter the paisa: ";
        cin>>p;
    }
    float paisa()
    {
        return(p/100);
    }
    void display()
    {
        float add;
        add=rs+paisa();
        cout<<"After adding the currency: Rs."<<add;
    }
};
int main()
{
    currency c1;
    c1.setdata();
    c1.display();
}
