#include <stdio.h>

/**
 * main - This print all multiples of 5 and 3 of 1024
 * @void: The evaluated input
 * Return: always 0
 */
int main(void)
{
	long int x = 1, y = 2, z, w, sum = 2;

	for (w = 0; w < 50; w++)
	{
		z = x + y;
		x = y;
		y = z;
		if ((z >= 2) && (z <= 4000000) && (z % 2 == 0))
			sum += z;
	}
	printf("%li\n", sum);
	return (0);
}
