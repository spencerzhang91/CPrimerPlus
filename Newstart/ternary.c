#include <stdio.h>

int main(void)
{
	double rate;
	int income = 10000;
	int residency = 4;
	
	rate = income > 4000 && residency < 5? 3.5: 2.0;
	// The above is the same as:
	// rate = ((income > 4000) && (residency < 5))? 3.5: 2.0;
	// Make sure to get the hang of precedence of operators.
	
	printf("rate is %.2f\n", rate);
	
	return 0;
}
