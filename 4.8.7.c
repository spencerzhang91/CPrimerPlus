/* 4.8.7.c -- run run run */
#include <stdio.h>
int main(void)
{
	const float G2L = 3.785;
	const float M2K = 1.609;	
	float gas;
	float mile;
	
	printf("Please input your mile and gas in order.\n");
	scanf("%f %f", &mile, &gas);
	printf("%.1f\n", mile / gas);
	printf("%.1f\n", (gas*G2L)/(mile*M2K) * 100);
	return 0;
	
}
