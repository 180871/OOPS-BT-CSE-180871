#include<iostream>
class Unary{
	public:
		char x;
		Unary(char y)
		{
			x=y;
		}
		friend Unary operator ++(Unary u)
		{
			int temp=(int) u.x+1;
			if((char) temp >'z'|| (char) temp >'Z');
				temp=(int) 'a';
			Unary c=Unary((char) temp);
			return c;	
		}
};
void print(Unary u)
{
	printf("ASCII=%3d char=%c\n",(int)u.x, u.x);
}
int main()
{
	Unary u=Unary('e');
	Unary a=++u;
	print(u);
	print(a);
	return 0;
}
