#include<iostream>
using namespace std;
class Car
{
    public:
        Car()
        {
            cout<<"Car ";
        }
};
class Honda :public Car
{
    public:
    Honda()
    {
        cout<<"Honda ";
    }
};
class Amaze : public Honda
{
    public:
    Amaze()
    {
        cout<<"Amaze ";
    }
};
int main()
{
    Amaze a;
    return 0;
};