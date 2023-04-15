#include <stdio.h>
/**
 * main - Entry point
 * Use the switch statement to create a program that will
 * find the month based on the number input
 * Return: Always 0
 */

int main(void)
{
	int number;

	printf("Enter a number between 1 t0 12");
	scanf("%d", &number);

	switch(number)
	{
		case1:
		printf("January");
		break;
		case2:
                printf("February");
                break;
		case3:
                printf("March");
                break;
		case4:
                printf("April");
                break;
		case5:
                printf("May");
                break;
		case6:
                printf("June");
                break;
		case7:
                printf("July");
                break;
		case8:
                printf("August");
                break;
		case9:
                printf("September");
                break;
		case10:
                printf("October");
                break;
		case11:
                printf("November");
                break;
		case12:
                printf("December");
                break;
		default:
                printf("Invalid");
                return (0);
	}
}
