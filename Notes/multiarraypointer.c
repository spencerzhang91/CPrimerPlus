/* page 267 about multi array and pointer*/
#include <stdio.h>
int main(void)
{
	int zippo[4][2] = {{1,2},{3,4},{5,6},{7,8}};
	int *ptr1;
	int *ptr2;
	ptr1 = zippo[0];
	ptr2 = zippo[0][1];
	printf("zippo: %p, ptr1: %p, ptr2: %p\n", zippo, ptr1, ptr2);
	return 0;
}
