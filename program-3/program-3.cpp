#include<iostream>
int power(int m, int n=2);
void print(int x);
int main()
{
	int x=2,y=5;
	printf("2 to the power 2 is: ");
	print(power(x));
	printf("\n2 to the power 5 is: ");
	print(power(x,y));
	return 0;
}
int power(int m,int n)
{
	if(n==0)
	return 1;
	else if (n%2==0)
	return power(m,n/2)*power(m,n/2);
	else
	return m*power(m,n/2)*power(m,n/2);	
	
}
void print(int x)
{
	printf("%d",x);
}
