#include <stdio.h>
/**
 * main - check whether a number is odd or even
 * Use a ternary operator to check if the number is odd or even
 * Return: Always 0
 */

int main(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%d\n", number);

	int result = (number % 2 == 0) ? printf("The number is even"): printf("The number is odd");

	return (0);
}
