#include<stdio.h>
int main()
{
	int i,n=10;
	int a=0,b=1;
	printf("%d,%d",a,b);
	int next tern;
	for(int i=2;i<=n;i++){
	    next term = a+b;
		a=b;
		b=next term;
		printf("%d,",next term);
	}
	return 0;
}
