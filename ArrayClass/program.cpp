#include<iostream>
using namespace std;
class Array
{
    private:
    int *arr;
    int x=0;
    int length;
    public:
        Array(int n)
        {
            arr=new int[n];
            length=n;
        }
        void add(int n)
        {
            if(x>length-1)
            {
                cout<<"Stack overflow "<<endl;
                return;
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
};
int main()
{
    cout<<"Enter size:"<<endl;
    int x;
    cin>>x;
    Array a(x);
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<x;i++)
    {
        int n;
        cin>>n;
        a.add(n);
    }
    a.display();
    return 0;
}