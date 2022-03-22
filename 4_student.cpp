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
     student s1,s2,s3;
    cout<<"Enter Detail os students"<<endl;
    s1.getdata();
    s2.getdata();
    s3.getdata();

    cout<<"Students with marks more than 70."<<endl;
    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;

}