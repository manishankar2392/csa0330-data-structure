#include<stdio.h>
#include<stdio.h>
	struct student {
		char name[40];
		int rollnumber;
		int age;
	};
	int main()
	{
		int i;
		struct student s[5];
		printf("enter the 5 students data");
		for(i=0;i<5;i++)
	{
		printf("enter the student name ,rollnumber,age: ");
		scanf("%s %d %d",&s[i].name,&s[i].rollnumber,&s[i].age);
	}
	printf("\nreceived data : \n");
	for(i=0;i<5;i++)
	{
		printf("student : %d \n",i+1);
		printf("name : %s \nroll number : %d \nage: %d \n",s[i].name,s[i].rollnumber,s[i].age);
}
	return 0;
}
