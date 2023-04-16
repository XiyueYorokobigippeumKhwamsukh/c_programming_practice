#include <stdio.h>
/**
 * Can you write a prpgram that takes an input from the
 * user and prints it if the value is a negative odd number?
 * If the input value is positive, end the loop with message, 'Positive Value'
 * If the input value is negative even, skip the value with message 'Negative Even'
 * Return: Always 0
 */

int main(void)
{
	int number;

	while (1);
	{
	printf("Enter a number: ");
	scanf("%d", &number);

	if (number % 2 != 0)
	{
		printf("%d\n", number);
		continue
	}
	if (number > 0)
	{
		printf("Positive Value");
		break;
	}
	if (number < 0 % 2 == 0)
	{
		prinf("Negative Even");
		continue;
	}
	return (0);
}	
