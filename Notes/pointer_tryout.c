/* practice pointer */
#include <stdio.h>
void change(int *p1, int *p2, int *p3);
int main(void)
{
	int x = 10;
	int y = 20;
	int z = -5;
	printf("Originally x = %d y = %d z = %d\n", x, y, z);
	change(&x, &y, &z);
	printf("Now x = %d y = %d z = %d\n", x, y, z);
	return 0;
}

void change(int *p1, int *p2, int *p3)
{
	*p1 += 100;
	*p2 += 100;
	*p3 -= 100;
}


