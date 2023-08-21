#include<stdio.h>
int main()
{
	int n,n1,reverse=0,remainder;
	printf("enter the integer number");
	scanf("%d",&n);
	n1 = n;
	while(n!=0)
	{
		remainder=n%10;
		reverse = reverse*10+remainder;
		n=n/10;
	}
	if(n1 == reverse)
	{
		printf(" %d is palindrome",n1);
	}
	else
	printf("%d is not a palindrome",n1);
}
