/* typesize.c -- 输出类型的大小 */
#include <stdio.h>
int main(void)
{
/* C99 为类型大小提供一个%zd说明符 */
	
	printf("Type int has a size of %u bytes.\n", sizeof(int));
	printf("Type char has a size of %u bytes.\n", sizeof(char));
	printf("Type long has a size of %u bytes.\n", sizeof(long));
	printf("Type double has a size of %u bytes.\n", sizeof(double));
	printf("Type long long has a size of %u bytes.\n", 
	sizeof(long long));
	
	return 0;
	 
 } 
