<<<<<<< HEAD

=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Application entry point
 * Description - Check if number is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
>>>>>>> 9845427e23e41fcf692470f4eb8a36a8ab8a084d
