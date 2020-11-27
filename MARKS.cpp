#include<stdio.h>
main()
{
	//1.read marks of the student from the user
	printf("enter the marks:");
	int marks=0;
	scanf("%d",&marks);
	//2. check the marks 
	if(marks>=85 && marks<=100)
	{
		printf("GradeA");
	}
	else if(marks>=70 && marks<84)
	{
		printf("Grade B");
	}
	else if(marks>=55 && marks<69)
	{
		printf("GradeC");
	}
	else if(marks>=40 && marks<54)
	{
		printf("GradeD");
	}
	else if(marks>40)
	{
		printf("GradeE");
	}
	// 3. perform the relavent action
}
