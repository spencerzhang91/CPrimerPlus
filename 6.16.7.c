/* 6.16.7.c */
#include <stdio.h>
int main(void)
{
	float num1, num2, res;
	int status;
	
	printf("Please enter two floating point numbers: \n");
		
	while (scanf("%f %f", &num1, &num2) == 2)
	{
		res = (num1-num2)/(num1 * num2);
		printf("result = %.2f\n", res);
		printf("Next pair: \n");		
	}
	printf("Done\n");
	return 0;
}
