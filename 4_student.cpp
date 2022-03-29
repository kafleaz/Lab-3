#include<iostream>
using namespace std;
class student
{
    char name[16];
    int roll;
    float marks=0;
    public:

    void getdata(void);
    void showdata(void);

};
void student :: getdata(void)
{
    
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll no.: ";
    cin>>roll;
    cout<<"Marks: ";
    cin>>marks;   
}
void student ::showdata(void)
{
    if (marks> 70)
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }  
}
int main()
{
     student s[5];
    cout<<"Enter Detail of students"<<endl;
    for (int i = 0; i < 5; i++)
    {
        s[i].getdata();
    }
    cout<<"Students with marks more than 70."<<endl;
    for (int i = 0; i < 5; i++)
    {
        s[i].showdata();
    }
    return 0;

}