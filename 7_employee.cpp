#include<iostream>
using namespace std;
class employee
{
    char name[16];
    int age;
    float salary;
    public:
    void getdata()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"age: ";
        cin>>age;
        cout<<"Salary: ";
        cin>>salary;
    }
    void putdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    employee manager, f1,f2,f3, w1,w2,w3,w4,w5;
    cout<<"Enter data of manager."<<endl;
    manager.getdata();
    cout<<"Enter data of 3 foremen."<<endl;
    f1.getdata();
    f2.getdata();
    f3.getdata();
    cout<<"Enter data of 5 workers."<<endl;
    w1.getdata();
    w2.getdata();
    w3.getdata();
    w4.getdata();
    w5.getdata();
    cout<<"The details of manager."<<endl;
    manager.putdata();
    cout<<"The details of foremen."<<endl;
    f1.putdata();
    f2.putdata();
    f3.putdata();
    cout<<"The details of workers."<<endl;
    w1.putdata();
    w2.putdata();
    w3.putdata();
    w4.putdata();
    w5.putdata();
}