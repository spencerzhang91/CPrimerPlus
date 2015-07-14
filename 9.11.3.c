/* 9.11.3.c */
#include <stdio.h>
void chmatrix(char c, int row, int col);
int main(void)
{
	char c = '*';
	int row = 13;
	int col = 13;
	chmatrix(c, row, col);
	return 0;
}

void chmatrix(char c, int row, int col)
{
	int cnt_r;
	int cnt_c;
	for (cnt_r = 0; cnt_r < row; cnt_r++)
	{
		for (cnt_c = 0; cnt_c < col; cnt_c++)
			putchar(c);
		putchar('\n');
	}			
}
