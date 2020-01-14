#include<iostream>
int power(int m, int n);
void display(int m,int n=2);
int main()
{
	int x=2,y=5;
	display(x);
	display(x,y);
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

void display(int m,int n)
{
	printf("%d to the power %d is %d.\n",m,n,power(m,n));
}






