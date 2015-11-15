/* prntval.c -- 发现print函数的返回值 */
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	
	rv = printf("%-20d F is water's boiling point.\n", bph2o);
	printf("The print() function printed %d characters.\n", rv);
	return 0;
 } 
