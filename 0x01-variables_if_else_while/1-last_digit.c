#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last = (n % 10);

	if (last > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, last);

	else if (last == 0)
		printf("The last digit of %d is %d and is 0\n", n, last);

	else if (last < 6)
		printf("The last digit of %d is %d and is less than 6\n", n, last);

	return (0);
}
