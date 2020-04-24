#include<iostream>
using namespace std;
class parent1
{
    public:
     parent1()
    {
        cout <<"This is parent-1"<<endl;
    }

};
class parent2
{
    public:
    parent2()
    {
        cout <<"This is parent-2"<<endl;
    }
};
class parent3
{
    public:
    parent3()
    {
        cout <<"This is parent-3"<<endl;
    }
};
class child : public parent1 ,private parent3 ,protected parent2
{
    
};
int main()
{
    child c;
    return 0;
}