#include<iostream>
#include<stdlib.h>
using namespace std;
class Assignment
{
    private: 
    int x;
    public:
    Assignment(int x)
    {
        this->x=x;
    }
    void setX(int a)
    {
        x=a;
    }
    int getX(int a)
    {
        x=a;
    }
    bool isEven()
    {
        if(x%2==0)
        return true;
        return false;
    }
    bool isEven(int a)
    {
        if(a%2==0)
        return true;
        return false;
    }
    string convert(bool a)
    {
        if(a)
        {
            return "EVEN ";
        }
        return "ODD ";
    }
};
int main()
{
    int x;
    cout<<"Enter a number to check:"<<endl;
    cin>>x;
    Assignment a(x);
    while (true)
    {
        cout<<a.convert(a.isEven())<<endl;
        cout<<"Want to do again? (y/n)"<<endl;
        char again;
        cin>>again;
        if(again!='y')
        {
            break;
        }
        cout<<"Enter a number:"<<endl;
        cin>>x;
        a.setX(x);
    }
    
    return 0;
}