#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Main entry to function
* Prints out responses based on the
* number from the last digit of a randomly
* generated number
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	else if (last_digit > 5)
	{
		printf("Last digit of %i is %i", n, last_digit);
		printf(" and is greater than 5\n");
	}
	else if (last_digit < 6)
	{
		printf("Last digit of %i is %i", n, last_digit);
		printf(" and is less than 6 but not 0\n");
	}
	return (0);
}
