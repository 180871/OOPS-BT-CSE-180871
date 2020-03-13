#include<iostream>
using namespace std;
class String
{
	private:
		string test;
		
	public:
	  friend String operator +( String s1, String s2)
	{
		String s3;
		s3.setTest(s1.getTest()+" "+s2.getTest());
		return s3;
	
	}
	public:
		void setTest(string name)
		{
			test=name;
		}
		void display()
		{
			cout<<getTest()<<endl;
		}
		string getTest()
		{
			return test;
		}
		bool check(string text)
		{
			if(text.length()==test.length())
			{
				for(int i=0;i<test.length();i++)
				{
					if(test[i]!=test[i])
						return false;
				}
				return true;
			}
			return false;
		}	
		bool check(string text1,string text2)
		{
			if(text2.length()==text1.length())
			{
				for(int i=0;i<text1.length();i++)
				{
					if(text2[i]!=text1[i])
						return false;
				}
				return true;
			}
			return false;
		}
	
};
int main()
{
	String firstName;
	String lastName;
	firstName.setTest("dipu");
	lastName.setTest("kumar");
	firstName.display();
	cout<<(firstName+lastName).getTest()<<endl;
	(firstName.check(lastName.getTest(),lastName.getTest()))?cout<<"Matched"<<endl:cout<<"Not matched"<<endl;
	return 0;
}
