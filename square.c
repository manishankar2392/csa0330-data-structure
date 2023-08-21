#include<stdio.h>
int main()
{
	int i,j,n1,n2;
	printf("enter the number of rows");
	scanf("%d",&n1);
	for(i=5;i>=1;i--)
{
    for(j=5;j>=i;j--)
	{
	  printf("* ");
	}
    printf("\n");
   }
   return 0;
}
