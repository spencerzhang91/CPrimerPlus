/* 7.12.10.c */
#include <stdio.h>
#define SNG 17850		// tax threshold for single
#define OWN 23900		// tax threshold for ownner		
#define MRD 29750		// tax threshold for married
#define DVC 14875		// tax threshold for devorced
int type_selector(int);
int income_selector(double);

int main(void)
{
	double income;
	int type, i;
	double threshold;
	double tax;
	
	for (i = 0; i <= 65; i++)
		printf("%c", '*');
	printf("\nPlease choose your identity (any other key to quit):\n");
	printf("1) Single \t\t 2)Ownner\n3)Married \t\t 4)Divorced\n");
	for (i = 0; i <= 65; i++)
		printf("%c", '*');
	printf("\n");
	
	while (scanf("%d", &type) == 1)
	{
		switch(type)
		{
			case 1:printf("Identity Code->SNG: %d\n", SNG);threshold = SNG;
			break;
			case 2:printf("Identity Code->OWN: %d\n", OWN);threshold = OWN;
			break;
			case 3:printf("Identity Code->MRD: %d\n", MRD);threshold = MRD;
			break;
			case 4:printf("Identity Code->DVC: %d\n", DVC);threshold = DVC;
			break;
			default: printf("Bye!");return 0;
		}
		printf("Please enter your income: \n");
		while (scanf("%lf", &income) == 1)
		{
			if (income > threshold)
				tax = (income-threshold)*0.28 + threshold*0.15;
			else
				tax = income * 0.15;
			printf("Your tax is %lf.\n", tax);break;
		}
		printf("Please choose your identity (any other key to quit):\n");
		continue;
	}
	printf("Bye!");
	return 0;
}
