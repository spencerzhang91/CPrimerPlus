/* 14.18.5.c */
#include <stdio.h>
#define CSIZE 4
#define LEN 31
struct name {
	char first[LEN];
	char last[LEN];
};
struct student {
	struct name person;
	float grade[3];
	float averg;
};

void setgrade(struct student array[], int n);
void aver(struct student array[], int n);
void display(const struct student array[], int n);
void caver(struct student array[], int n);

int main(void)
{
	struct student tops[CSIZE] = {
		{{"Jingyi","Zhu"}},
		{{"Andy","Lau"}},
		{{"Diwen","Deng"}},
		{{"Dachui","Wang"}},
		{{"Jinteng","Xiao"}}
	};
	
	setgrade(tops, 5);
	aver(tops, 5);
	display(tops, 5);
	caver(tops, 5);
	return 0;
}

void setgrade(struct student array[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("Please enter No.%d student's 3 grades:\n", i);
		while (scanf("%f %f %f", &array[i-1].grade[0],
						  &array[i-1].grade[1],
						  &array[i-1].grade[2]) < 3)
		{
			puts("Please try again.");
			while (getchar() != '\n') continue;
		}
	}
}
void aver(struct student array[], int n)
{
	for (int i = 0; i < n; i++)
		array[i].averg = (array[i].grade[0] + 
						  array[i].grade[1] + 
						  array[i].grade[2]) / 3;
}
void display(const struct student array[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%s: %.1f %.1f %.1f -> %.1f\n", array[i].person.first,
									array[i].grade[0],
								    array[i].grade[1],
									array[i].grade[2],
									array[i].averg);
}
void caver(struct student array[], int n)
{
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;
	float suma = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 += array[i].grade[0];
		sum2 += array[i].grade[1];
		sum3 += array[i].grade[2];
		suma += array[i].averg;
	}
	printf("Averages of %d students\n", n);
	printf("grade1: %.1f grade2: %.1f grade3: %.1f averg: %.1f\n",
			sum1/n, sum2/n, sum3/n, suma/n);
}
