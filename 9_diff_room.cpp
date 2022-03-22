#include<iostream>
using namespace std;
class room
{
    int l, b, h;

    public:
    void datain()
    {
        cout<<"Enter the length, Breadth and height: "<<endl;
        cout<<"Length: ";
        cin>>l;
        cout<<"Breadth: ";
        cin>>b;
        cout<<"Height: ";
        cin>>h;
    }
    int area()
    {
        return(2*(l+b)*h);
    }
    float volume()
    {
        return(l*b*h);
    }
    void display()
    {
        cout<<"The area of the room: "<<area()<<endl;
        cout<<"The volume of the room: "<<volume()<<endl;
    }
};
int main()
{
    room r1,r2;

    r1.datain();
    r1.display();

    r2.datain();
    r2.display();


}