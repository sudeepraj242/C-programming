#include<stdio.h>

long long multiply(long long x,long long y){
	if(y==0)
	{
		return 0;
	}
	long long z=multiply(x,y/2);
	
	if(y%2==0)
	{
		return 2*z;
	}
	else{
		return x+(2*z);
	}
}
int main()
{
	long long x,y;
	
	printf("Enter two integers (x and y where y>=0): \n");
	if (scanf("%lld %lld",&x,&y)!=2 || y<0){
		printf("Invalid input.Please ensure y is a non negative integer.\n");
		return 1;
	}
	long long result=multiply(x,y);
	printf("Product of %lld and %lld is: %lld\n",x,y,result);
	return 0;
	
}

