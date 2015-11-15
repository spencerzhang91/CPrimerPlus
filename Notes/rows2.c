// rows2.c -- inner loop depends on outer loop
#include <stdio.h>
int main(void)
{
	const int ROWS = 6;
	const int CHARS = 6;
	
	int row, ch;
	for (row=0; row<=ROWS; row++)
	{
		for (ch=('A'+row); ch<('A'+CHARS);ch++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
