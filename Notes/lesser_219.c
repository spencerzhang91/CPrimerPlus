/* lesser.c -- find the smaller integer */
#include <stdio.h>
int imin(int, int);
int main(void)
{
	int evil1, evil2;
	printf("Enter a pair of integers(q to quit):\n");
	while (scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n",
		evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers(q to quit):\n");
	}
	printf("Bye");
	return 0;
}

int imin(int n, int m)
{
	int res;
	if (n < m)
		res = n;
	else if (n > m)
		res = m;
	else
		printf("%d and %d is equal.\n", n, m);
	return res;
}
