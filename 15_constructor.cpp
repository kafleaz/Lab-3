#include<iostream>
using namespace std;
class integer
{
    int m, n;
    public:
    integer() //default constructor
    {
        m=4;
        n=5;
    }
    integer(int x, int y) //parameterized constructor
    {
        m=x;
        n=y;
    }
    integer(integer &z) //copy constructor
    {
        m=z.m;
        n=z.n;
    }
    void display()
    {
        int add;
        add=m+n;
        cout<<add<<endl;
    }
};
int main()
{
    integer sum1;
    integer sum2(9,2);
    integer sum3(sum2);
    cout<<"Sum 1: "<<endl;
    sum1.display();
    cout<<"Sum 2: "<<endl;
    sum2.display();
    cout<<"Sum 3: "<<endl;
    sum3.display();
}