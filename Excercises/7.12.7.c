/* 7.12.7.c -- a tax calculator */
#include <stdio.h>
#define BASEPAY 10
#define OVERPAY 15
#define TIME 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define S1 300
#define S2 450

int main(void)
{
	int hours;
	float netpay = 0;
	float sumpay = 0;
	float tax = 0.0;
	
	printf("Enter your working hour a week: ");
	scanf("%d", &hours);
	if ((hours <= 40) && (hours >= 0))
		sumpay = hours * BASEPAY;
		
	else if (hours <= 168)
		sumpay = (hours-TIME)*OVERPAY + BASEPAY*TIME;
		
	if (sumpay <= S1 && sumpay > 0)
		tax = sumpay * RATE1;
		
	else if (sumpay > S1 && sumpay <= S2)
		tax = S1*RATE1 + (sumpay-S1)*RATE2;
		
	else
		tax = S1*RATE1 + (S2-S1)*RATE2 + (sumpay - S1 - S2)*RATE3;
	netpay = sumpay - tax;
	printf("sumpay: %.2f  tax: %.2f  netpay: %.2f\n", sumpay, tax, netpay);
	return 0;
}
