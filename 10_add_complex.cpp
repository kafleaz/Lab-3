#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public:
    void setdata(int real, int img)
    {
        cout<<"Enter the data";
        cin>>a>>b;
        a=real;
        b= img;
    }
    int add(int d, int c)
    {
        d.x= a+ c.a;
    }
    void dispaly()
    {
        cout<<"Added: "<<add();
    }

};
int main()
{
    complex c1;
}