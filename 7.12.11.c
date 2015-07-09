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

int main(void)
{
	int p_pound, s_pound, c_pound;
	float discount;
	float sum;
	float freight;
	
	
	printf("\n====================ABC Mail Order Grocery===================\n");
	printf("Order List:\n\n");
	printf("  a) potato: $%.2f / pound\tb) sugarbeet: $%.2f / pound\n  c) carrot: $%.2f / pound\n",
	POTATO, SUGARBEET, CARROT);
	printf("\n=============================================================\n");
	return 0;
}
