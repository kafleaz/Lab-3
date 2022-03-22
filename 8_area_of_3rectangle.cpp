#include<iostream>
using namespace std;
class rectangle
{
    int l, b;
    public:
    void readdata()
    {
        
        cout<<"Length: ";
        cin>>l;
        cout<<"Breadth: ";
        cin>>b;
    }
    int area()
    {
        return(l*b);
    }
    int perimeter()
    {
        return(2*(l+b));
    }
    void display()
    {
        cout<<"The area of rectangle is: "<<area()<<endl;
        cout<<"The perimeter of rectangle is: "<<perimeter()<<endl;
    }
};
int main()
{
    rectangle r1,r2,r3;
    cout<<"Enter the length and breadth of rectangle."<<endl;
    r1.readdata();
    r1.display();

    r2.readdata();
    r2.display();

    r3.readdata();
    r3.display();
    
}