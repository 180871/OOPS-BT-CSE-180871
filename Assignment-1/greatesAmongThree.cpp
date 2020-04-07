#include<iostream>
using namespace std;
class Test
{
	int x,y,z;
public:
	int greatest(int a,int b,int c)
	{
		if(a>b && b>c)
			return a;
		if(b>c&& c>a)
			return b;
		else
			return c;
	}
	int greatest()
	{

	    if(x>y && y>z)

            return x;
        if(y>x && x>z)
            return y;
        else
            return z;
	}
	int sumOfTwo(int a,int b)
	{
	return a+b;
	}
	int sumOfTwo()
	{
		return (x+y);
	}
	Test()
	{

	}
	Test(int a,int b,int c)
	{
		x=a;y=b;z=c;
	}
};
int main()
{
	int x=7,y=8,z=9;
	Test t(x,y,z);
	cout<<"greatest among "<<x<<" "<<y<<" "<<z<<" "<<"is "<<t.greatest(x,y,z)<<endl<<"sum of "<<x<<" and "<<y<<" is "<<t.sumOfTwo();
	return 0;
}
