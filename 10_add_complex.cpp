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
        return(img);
    }
    int real()
    {
        return(rel);
    }
    void display()
    {
        int r,i;
        r=img + img;
         
        cout<<"The addition of given data is"<<endl << real()<<" + "<<imaginary()<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    cout<<"Enter the first real and imaginary value."<<endl;
    c1.setdata();
    //cout<<"Enter the second real and imaginary value."<<endl;
    //c2.setdata();
    c1.display();
    
}