/* binary_search.c */
/* implementation of binary search in C */
/* And homemade implementation of insertion */
#include <stdio.h>
#include <stdbool.h>
#define N 9
#define M 5

int binary_search(int num, int *arr, int len);
void insert_item(int num, int *arr, int len, int place);

int main(void)
{
	int array[N * 2] = {1,3,5,7,8,9,17,18,29};
	int number[M] = {2,4,10,20,25};
	
	for (int i = 0; i < M; i++)
		insert_item(number[i], array, N*2, binary_search(number[i], array, N) + 1);
		
	for (int i = 0; i < N*2; i++)
		printf("%d ", array[i]);
			
	return 0;
}

int binary_search(int num, int *arr, int len)
{
	int min = 0;
	int max = len - 1;
	while (min <= max)
	{
		if (num == arr[(min+max)/2])
			return (min + max) / 2;
			
		else if (num < arr[(min+max)/2])
			max = (min + max)/2 - 1;
			
		else if (num > arr[(min+max)/2])
			min = (min + max)/2 + 1;
	}
	return (min + max) / 2;
}

void insert_item(int num, int *arr, int len, int place)
{
	for (int i = len-1; i >= place; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[place] = num;
}

