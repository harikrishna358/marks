#include<stdio.h>
main()
{
	//1.Display the menu
	printf("pick the dish:\n1.noodles,\n2.biryani,\n3.icecream,\n4.noons");
	//2.read their choice
	int choice=0;
	scanf("%d",&choice);
	//3.display based on their choice
	
	switch(choice)
	{
		case 1:
		printf("you picked noodles,");
		break;
		case 2:
		printf("you picked briyani,");
		break;
		case 3:
		printf("you picked icecream");
		break;
		case 4:
		printf("you picked noons,");
		break;
		default: printf("invalid choice");
	}
}
