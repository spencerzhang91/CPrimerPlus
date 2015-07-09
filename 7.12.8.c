/* 7.12.8.c */
#include <stdio.h>
#include <stdbool.h>
#define OTR 1.5
#define TIME 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define S1 300
#define S2 450
int filter(void);

int main(void)
{
	int hours, i;
	float netpay = 0;
	float sumpay = 0;
	float tax = 0.0;
	float basepay;
	
	
	for (i = 0; i <= 65; i++)
		printf("%c", '*');	
	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
	printf("%-30s%s\n", "1) $8.75/hr", "2) $9.33/hr");
	printf("%-30s%s\n", "3) $10.00/hr", "4) $11.20/hr");
	printf("%-30s\n", "5) quit");
	for (i; i > 0; i--)
		printf("%c", '*');
	printf("\nChoose your base payment per hour:\n");
	
	switch (filter_pay())
	{
		case 1:
			basepay = 8.75;
			break;
		case 2:
			basepay = 8.75;
			break;
		case 3:
			basepay = 8.75;
			break;
		case 4:
			basepay = 8.75;
			break;
		default:
			printf("You chose to quit, bye!\n");
			return 0;
	}
	
	printf("Enter your working hour a week: ");	
	hours = filter_time();
	
	if ((hours <= 40) && (hours >= 0))
		sumpay = hours * basepay;
		
	else if (hours <= 168)
		sumpay = (hours-TIME)*basepay*OTR + basepay*TIME;
		
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

int filter_pay(void) 
{
	int num;
	char str[40];
	while ((scanf("%d",&num)!=1) || num > 5 || num < 1)
	{
		gets(str);
		printf("error, input again.\n");
	}
 	while (getchar() != '\n')
 		continue;
	return num;
}

int filter_time(void) 
{
	int num;
	char str[40];
	while ((scanf("%d",&num)!=1) || num > 168 || num < 0)
	{
		gets(str);
		printf("error, input again.\n");
	}
 	while (getchar() != '\n')
 		continue;
	return num;
}



