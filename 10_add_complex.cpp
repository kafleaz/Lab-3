#include<iostream>
using namespace std;
class complex
{
    int rel, img;
    public:
    void setdata()
    {
        
        cin>>rel>>img;
    }
    int imaginary()
    {
        return(img+img);
    }
    int real()
    {
        return(rel+rel);
    }
    void display()
    {
        cout<<"The addition of given data is"<<endl << real()<<"+"<<imaginary()<<"i";
    }
};
int main()
{
    complex c1;
    cout<<"Enter the first real and imaginary value."<<endl;
    c1.setdata();
    cout<<"Enter the second real and imaginary value."<<endl;
    c1.setdata();
    c1.display();

}