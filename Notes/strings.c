/* strings.c -- formatting strings */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
	printf("/%2s/\n", BLURB);
	printf("/%30.8s/\n", BLURB);
	printf("/%-24.5s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	return 0;
}
// still automaticly extend if not long enough
// %.5s the .5 here indicates that only 5 chars would be printed
// %-13 the - here means that it is left aligned
