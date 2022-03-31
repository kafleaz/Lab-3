#include<iostream>
using namespace std;
class large
{
    int x,y;
    public:
    void in()
    {
        cout<<"Enter any two value: ";
        cin>>x>>y;
    }
    int larg()
    {
        if (x>y)
        {
            return(x);
        }
        else
            return y;
         
    }
};
int main()
{
    large l1;
    l1.in();
    cout<<"The larger value is "<<l1.larg()<<endl;
}