/* 7.12.5.c */
#include <stdio.h>
int main(void)
{
	int flag;
	int num;
	int sum_odd = 0;
	int cnt_odd = 0;
	int sum_eve = 0;
	int cnt_eve = 0;
	
	while ((scanf("%d", &num) == 1) && num != 0)
	{
		flag = num % 2;
		switch (flag)
		{
			case 0:
				cnt_eve++;
				sum_eve += num;
				break;
			
			case 1:
				cnt_odd++;
				sum_odd += num;
				break;
		}
	}
	printf("odd number count: %d\n"
		   "odd number average: %.2f\n"
		   "even number count: %d\n"
		   "even number average: %.2f\n",
		    cnt_odd, (float)sum_odd / cnt_odd,
			cnt_eve, (float)sum_eve / cnt_eve
		  );
	return 0;
}
