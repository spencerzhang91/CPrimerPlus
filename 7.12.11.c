/* 7.12.11.c -- This program seems a little useful in real world as well... */
#include <stdio.h>
#include <stdbool.h>
#define POTATO 1.25		 // price of potato per pound
#define SUGARBEET 0.65	 // price of sugarbeet per pound
#define CARROT 0.89		 // price of carrot per pound
#define P1 5			 // freight fee threshold point 1: 5 pounds
#define P2 20			 // freight fee threshold point 2: 20 pounds
#define F1 3.5			 // freight fee blow P1
#define F2 10.0			 // freight fee between P1 and P2
#define F3 8.0			 // base freight fee when above P2
#define F4 0.1			 // additional freight per pound when above P2
#define DR 0.05			 // discount rate is 5%

void listing(int pp, int sp, int cp, float freight, float total, float discount);
int main(void)
{
	int p_pound = 0;	 // weight of potato
	int s_pound = 0;	 // weight of sugarbeet
	int c_pound = 0;	 // weight of carrot
	int weight = 0;		 // total weight of all goods
	float total = 0.0;	 // total cost excluding freight
	float freight = 0.0; // freight
	float discount;
	char ch;			 // the option
	
	printf("\n====================ABC Mail Order Grocery====================\n");
	printf("Order List:\n\n");
	printf("  a) potato: $%.2f / pound\tb) sugarbeet: $%.2f / pound\n  c) carrot: $%.2f / pound\n",
	POTATO, SUGARBEET, CARROT);
	printf("\n==============================================================\n");
	printf("Select your cargo (q to finish):\n");
	// the while loop below controls the ordering flow
	while ((ch = getchar()) != 'q')
	{
		if (ch == '\n')
			continue;
		switch (ch)
		{
			case 'a':
				printf("Enter amount(pound): ");
				scanf("%d", &p_pound);break;
			case 'b':
				printf("Enter amount(pound): ");
				scanf("%d", &s_pound);break;
			case 'c':
				printf("Enter amount(pound): ");
				scanf("%d", &c_pound);break;
			case 'q':
				break;
			default:
				printf("Invalid input. Please enter again:\n");
				break; // used 'continue' and some bad thing happend
		}
		while(getchar() != '\n')
			continue;
		printf("Keep shopping(choose a) b) c) or q to quit)?\n");	
	}	
	weight = (p_pound + c_pound + s_pound);
	if (weight <= P1)
		freight = F1;
	else if (weight < P2)
		freight = F2;
	else
		freight = F3 + F4*(weight - P2);
		
	total = p_pound*POTATO + s_pound*SUGARBEET +c_pound*CARROT;
	if (total >= 100)
		discount = total * DR;
	else
		discount = 0;
	
	listing(p_pound,s_pound,c_pound,freight,total,discount);
	return 0;
}

void listing(int pp, int sp, int cp, float freight, float total, float discount)
{
	printf("\n======================Final Shipping List=====================\n\n");
	printf("  potato: %d pounds \t price: $%.2f \t sum: $%.2f\n", pp, POTATO, pp*POTATO);
	printf("  sugarbeet: %d pounds \t price: $%.2f \t sum: $%.2f\n", sp, SUGARBEET, sp*SUGARBEET);
	printf("  carrot: %d pounds \t price: $%.2f \t sum: $%.2f\n", cp, CARROT, cp*CARROT);
	printf("  Total weight: %d pounds\n", pp+sp+cp);
	printf("  Freight: $%.2f\n", freight);
	printf("  Discount: $%.2f\n", discount);
	printf("  Total Cost: $%.2f\n", total - discount + freight);
	printf("\n==============================================================\n");
	return;
}
