#include<iostream>
class Sum{
	public:
		int x,y;
		Sum(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		friend Sum operator +(const Sum cordinate1, const Sum cordinate2)
		{
			int x=cordinate1.x+cordinate2.x;
			int y=cordinate1.y+cordinate2.y;
			Sum result=Sum(x,y);
			return result;
		}
};
void print(Sum print)
{
	printf("x=%d y=%d\n",print.x,print.y);
}
int main()
{
	Sum first=Sum(1,1);
	Sum second=Sum(2,3);
	Sum result=first+second;
	print(result);
	return 0;
}
