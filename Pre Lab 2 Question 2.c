#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("Invalid data");
		break;
	}
	return 0;
}