#include<iostream>

/*

Program of constructor overloading and use of copy constructor.
*/
using namespace std;
class Test  
{
	public:
		int x,y;
		Test()
		{
			x=-1;
			y=-1;
		}
		Test(int a)
		{
			x=a;
		}
		Test(int a, int b)
		{
			x=a;
			y=b;
		}
};
class Name
{
	public:
	string firstName, middleName, lastName;
	Name(string first, string middle, string last)
	{
		firstName=first;
		middleName=middle;
		lastName=last;
	}
	Name(const Name &m)
	{
		firstName=m.firstName;
		lastName=m.lastName;
		middleName=m.middleName;
	}
	
};
void display(Test t)
{
	printf("x=%2d y=%2d\n",t.x,t.y);
}
void display(Name n)
{
	cout<<n.firstName<<" "<<n.middleName<<" "<<n.lastName<<endl;
}
int main()
{
	Test t1=Test();
	Test t2= Test(1);
	Test t3=Test(2,3);
	display(t1);display(t2);display(t3);
	string first, middle, last;
	printf("First name:\n");
	getline(cin,first);
	printf("Middle name:\n");
	getline(cin,middle);
	printf("Last name:\n");
	getline(cin,last);
	Name n1=Name(first, middle,last);
	display(n1);
	Name n2(n1);
	display(n2);
	return 0;
}


