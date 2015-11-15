/* arf.c -- function that handles array */
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n); // equivalent: void show_array(const double *ptr, int n);
void mult_array(double ar[], int n, double mult); // equivalent: void mult_array(double *ptr, int n, double mult);

int main(void)
{
	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
	
	printf("The orginal dip array: \n");
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array(): \n");
	show_array(dip, SIZE);
	return 0;
}

// show array content
void show_array(const double ar[], int n) // equivalent: void show_array(const double *ptr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%8.3f", ar[i]); // equivalent: printf("%8.3f", *(ptr + i));
	putchar('\n');
}

// multiply the original array with a same number
void mult_array(double ar[], int n, double mult) // equivalent: void mult_array(double *ptr, int n, double mult)
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] *= mult; // equivalent: *(ptr + i) *= mult;
}
