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
    student s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();

    s1.datain();
    s2.datain();
    s3.datain();

    s1.display();
    s2.display();
    s3.display();

    return 0;
    
}