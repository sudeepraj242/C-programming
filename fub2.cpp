#include<stdio.h>

int fib2(int n)
{
	if(n==0)
	{
		return 0;
	}
	
	int f[n+1];
	
	f[0]=0;
	f[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	
	printf("Fibonacci Series: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",f[i]);
	}
	printf("\n");
	
	
}
int main()
{
	int num;
	printf("Enter the value of n: \n");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Please enter a non negative integer.\n");
		return 1;
	}
	fib2(num);
	

    return 0;
}
