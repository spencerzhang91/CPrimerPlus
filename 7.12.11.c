/* 7.12.11.c -- This program seems a little useful in real world as well... */
#include <stdio.h>
#include <stdbool.h>
#define POTATO 1.25		// price of potato per pound
#define SUGARBEET 0.65	// price of sugarbeet per pound
#define CARROT 0.89		// price of carrot per pound
#define P1 5			// freight fee threshold point 1: 5 pounds
#define P2 20			// freight fee threshold point 2: 20 pounds
#define F1 3.5			// freight fee blow P1
#define F2 10.0			// freight fee between P1 and P2
#define F3 8.0			// base freight fee when above P2
#define F4 0.1			// additional freight per pound when above P2
#define DISCOUNT 0.05	// discount rate is 5%

void listing(int pp, int sp, int cp, float freight, float total);
int main(void)
{
	int p_pound = 1;
	int s_pound = 1;
	int c_pound = 1;	
	float total = 0.0;
	float freight = 0.0;	
	
	printf("\n====================ABC Mail Order Grocery====================\n");
	printf("Order List:\n\n");
	printf("  a) potato: $%.2f / pound\tb) sugarbeet: $%.2f / pound\n  c) carrot: $%.2f / pound\n",
	POTATO, SUGARBEET, CARROT);
	printf("\n==============================================================\n");
	printf("Select your cargo (q to finish):\n");
	listing(p_pound,s_pound,c_pound,freight,total);
	return 0;
}

void listing(int pp, int sp, int cp, float freight, float total)
{
	printf("\n======================Final Shipping List=====================\n\n");
	printf("  potato: %d pounds \t price: $%.2f \t sum: $%.2f\n", pp, POTATO, pp*POTATO);
	printf("  sugarbeet: %d pounds \t price: $%.2f \t sum: $%.2f\n", sp, SUGARBEET, sp*SUGARBEET);
	printf("  carrot: %d pounds \t price: $%.2f \t sum: $%.2f\n", cp, CARROT, cp*CARROT);
	printf("  Total weight: %d pounds\n", pp+sp+cp);
	printf("  Freight: $%.2f\n", freight);
	printf("  Discount: $%.2f\n", total*DISCOUNT);
	printf("  Total Price: $%.2f\n", total*(1-DISCOUNT)+freight);
	printf("\n==============================================================\n");
	return;
}
