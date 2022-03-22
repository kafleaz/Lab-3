#include<iostream>
using namespace std;
#define PI 3.14
class circle
{
    int r;
    public:
    void getdata()
    {
        cout<<"Enter the radious of circle: ";
        cin>>r;
    }
    float calArea()
    {
        return (PI*r*r);
    }
    void display()
    {
        cout<<"The area of the circle is: "<<calArea()<<endl;
    }
};
int main()
{
    circle c1,c2,c3;
    c1.getdata();
    c1.calArea();
    c1.display();

    c2.getdata();
    c2.calArea();
    c2.display();

    c3.getdata();
    c3.calArea();
    c3.display();


}