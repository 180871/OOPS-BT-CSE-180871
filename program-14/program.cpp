#include<iostream>
using namespace std;
class Arithematic
{
    private:
        int a,b;
    public:
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        void setData()
        {
            cout<<"A= ";
            cin>>a;
            cout<<"B= ";
            cin>>b;
        }
};
class Sum :public Arithematic
{
    private:
        int sum;
    public:
        int getSum()
        {
            cout<<"Enter values to Add"<<endl;
            setData();
            sum=getA()+getB();
            return sum;
        }
};
class Subtract :public Arithematic
{
    private:
        int ans;
    public:
        int getSubtract()
        {
            cout<<"Enter values to Subtract"<<endl;
            setData();
            ans=getA()-getB();
            return ans;
        }
};
class Result :public Subtract,public Sum
{
    public:
        Result()
        {
            cout<<"A+B = "<<getSum()<<endl<<"A-B = "<<getSubtract()<<endl;
        }
};
int main()
{
    Result s;
    return 0;
};