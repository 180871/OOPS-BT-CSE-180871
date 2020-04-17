#include<iostream>
#include<stdlib.h>
using namespace std;
class Array
{
    private:
    int *arr;
    int x=0;
    public:
        Array(int n)
        {
            arr=new int[n];
        }
        void add(int n)
        {
            int size=sizeof(arr);
            if(x>size)
            {
                cout<<"Stack overflow "<<endl;
            }
            arr[x]=n;
            x+=1;
        }
        void remove()
        {
            x--;
        }
        int size()
        {
            return x+1;
        }
        void display()
        {
            for(int i=0;i<x;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int* getArray()
        {
            return arr;
        }
};
int main()
{
    Array a(3);
    a.add(2);
    a.display();
    a.add(5);
    a.display();
    a.add(7);
    a.display();
    a.add(4);
    a.display();
    a.add(8);
    a.display();
    a.add(7);
    a.display();
    a.add(2);
    a.display();
    return 0;
}