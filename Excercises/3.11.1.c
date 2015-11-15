/* 3.11.1 test overflow and underflow cases */
#include <stdio.h>
int main(void)
{
	int in = 4294967200;
	float toobig = 3.4e38 * 100.0f;
	
	printf("%d %d\n", in, in + 2);
	printf("%e\n");
	return 0;
}
