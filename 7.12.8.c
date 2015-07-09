/* 7.12.8.c */
#include <stdio.h>
#define OTR 1.5
#define TIME 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define S1 300
#define S2 450

int main(void)
{
	int hours, i;
	int choice;
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
	while ((scanf("%d", &choice) == 1) & (choice != 5))
	{
		switch (choice)
		{
			case 1:
				basepay = 8.75;
				break;
			case 2:
				basepay = 9.33;
				break;
			case 3:
				basepay = 10.00;
				break;
			case 4:
				basepay = 11.20;
				break;
			default:
				printf("Please enter valid choices(1-5):\n");
		
		}
		printf("\nEnter your working hour a week: ");
		scanf("%d", &hours);
		if ((hours <= 40) && (hours >= 0))
			sumpay = hours * basepay;
		
		else if (hours <= 168)
			sumpay = (hours-TIME)*OTR*basepay + basepay*TIME;
		
		if (sumpay <= S1 && sumpay > 0)
			tax = sumpay * RATE1;
		
		else if (sumpay > S1 && sumpay <= S2)
			tax = S1*RATE1 + (sumpay-S1)*RATE2;
		
		else
			tax = S1*RATE1 + (S2-S1)*RATE2 + (sumpay - S1 - S2)*RATE3;
		netpay = sumpay - tax;
		printf("sumpay: %.2f  tax: %.2f  netpay: %.2f\n", sumpay, tax, netpay);
		printf("\nChoose your base payment per hour again(or 5 to quit):\n");
	}
	printf("You chose to quit, bye!\n");
	return 0;
}
