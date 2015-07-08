/* 7.12.3.c */
#include <stdio.h>
int main(void)
{
	int num;
	int cnt_ev = 0;
	int cnt_od = 0;
	int sum_ev = 0;
	int sum_od = 0;
	
	printf("Enter a series of numbers seperated by space. 0 to stop.\n");
	while ((scanf("%d", &num) == 1) && num != 0)
	{
		if (num % 2 == 0)
		{
			cnt_ev++;
			sum_ev += num;
		}
		else
		{
			cnt_od++;
			sum_od += num;
		}
	}
	printf("odd number count: %d\n"
		   "odd number average: %.2f\n"
		   "even number count: %d\n"
		   "even number average: %.2f\n",
		    cnt_od, (float)sum_od / cnt_od,
			cnt_ev, (float)sum_ev / cnt_ev
		  );
	return 0;
}
