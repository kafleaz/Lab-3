#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    static int count;
    public:
    void datain()
    {
        cout<<"Enter the data."<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no.: ";
        cin>>roll;
        count ++;
    }
    void display()
    {
        cout<<"COunt: "<<count<<endl;
    }
};
int student::count;
int main()
{
    student s[3];
    for (int i = 0; i < 3; i++)
    {
       s[i].display();
    }
    
    //s1.display();
    //s2.display();
    //s3.display();
    for (int i = 0; i < 3; i++)
    {
        s[i].datain();
    }
    
    //s1.datain();
    //s2.datain();
    //s3.datain();

    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }
    
    //s1.display();
    //s2.display();
    //s3.display();

    return 0;
    
}