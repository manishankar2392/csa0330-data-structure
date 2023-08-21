#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter the number n:");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		if(n % i ==0 ){
			c++;
		}
	}
	if(c == 2){
		printf("n the prime number");
	}
	else
	{
		printf("n the not prime number");
	}
	return 0;
}
