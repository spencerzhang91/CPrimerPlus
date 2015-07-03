/* 6.16.8.c */
#include <stdio.h>
float cal(float n, float m);

int main(void)
{
	float num1, num2, res;
	int status;
	
	printf("Please enter two floating point numbers: \n");
		
	while (scanf("%f %f", &num1, &num2) == 2)
	{
		res = cal(num1, num2);
		printf("result = %.2f\n", res);
		printf("Next pair: \n");		
	}
	printf("Done\n");
	return 0;
}

float cal(float n, float m)
{
	return (n-m)/(n * m);
}
