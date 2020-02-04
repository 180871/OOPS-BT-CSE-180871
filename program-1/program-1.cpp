#include<iostream>
class Matrix{
	/*
	Create a class Matrix to store a 2D array to form a matrix of 
	mxn and dynamically allocate memory for the 2D array.
	*/
	public:
	int **array;
	int *arr;
	int m=0,n=-1;
	int maxM=3,maxN=3;
	Matrix()
	{
		array=new int*[maxM];
		for(int i=0;i<maxM;i++)
		{
			array[i]=new int [maxN];
		}
	}
	Matrix(int x,int y)
	{
		array=new int*[x];
		for(int i=0;i<x;i++)
		{
			array[i]=new int [y];
		}
		this->maxM=x;
		this->maxN=y;
	}
	Matrix(const Matrix &m)
	{
		arr=new int[m.maxM*m.maxN];
		for(int i=0;i<maxM;i++)
		{
			for (int j=0;j<maxN;j++)
			{
				scanf("%d",&arr[i*maxN+j]);
			}
		}
	}
	void setArray(int x)
	{
		if((maxN-1)==n && (maxM-1)==m)
			return ;
		else if (n==maxN-1)
		{
			this->m++;
			this->n=0;
		}
		else
		{
			this->n++;
		}
		array[m][n]=x;
	}
	void display ()
	{
		for (int i=0;i<maxM;i++)
		{
			for (int j=0;j<maxN;j++)
			{
				printf("%d\t",array[i][j]);
			}
			printf("\n");
		}	
	}
	void display1D()
	{
		for (int i=0;i<maxM;i++)
		{
			for (int j=0;j<maxN;j++)
			{
				printf("%d\t",arr[i*maxN+j]);
			}
			printf("\n");
		}
		
	}
	
};
int main()
{
	int m,n,x,i;
	printf("Enter the size of the array\n");
	scanf("%d%d",&m,&n);
	Matrix mat1=Matrix(m,n);
	printf("Enter elements\n");
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&x);
			mat1.setArray(x);
		}
	}
	printf("Matrix 1\n");
	mat1.display();
	printf("Enter values for second matrix\n");
	Matrix mat2(mat1);
	printf("Matrix 2\n");
	mat2.display1D();
	return 0;
}


