/* golf.c -- golf championship score card */
#include <stdio.h>
int main(void)
{
	int jane, tarzan, cheeta;
	cheeta = tarzan = jane = 68;
	printf("%22s %8s %8s\n", "jane", "tarzan", "cheeta");
	printf("First round score %4d %8d %8d\n", jane, tarzan, cheeta);
	return 0;
}
