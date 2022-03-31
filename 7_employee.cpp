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
    employee manager, f[3], w[5];
    cout<<"Enter data of manager."<<endl;
    manager.getdata();
    cout<<"Enter data of foremen."<<endl;
    for (int i = 0; i < 3; i++)
    {
        f[i].getdata();
    }
    cout<<"Enter data of 5 workers."<<endl;
    for (int i = 0; i < 5; i++)
    {
        w[i].getdata();
    }
    cout<<"The details of manager."<<endl;
    manager.putdata();
    cout<<"The details of foremen."<<endl;
    for (int i = 0; i < 3; i++)
    {
        f[i].putdata();
    }
    cout<<"The details of workers."<<endl;
    for (int i = 0; i < 5; i++)
    {
        w[i].putdata();
    }
}