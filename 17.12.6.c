/* 17.12.6.c */
#include <stdio.h>
#define LEN 10

int search(const int *arr, int len, int target);
int binary_search(const int *arr, int min, int max, int k);

int main(void)
{
    int array[LEN] = {1,4,5,7,12,42,66,102,144,209};
    int res, num;
    puts("Please enter a number you want to search:");
    scanf("%d", &num);
    res = search(array, LEN, num);
    printf("Target number %d is %s.", num, (res==1)?"found": "not found");
    
    return 0;
}

int search(const int *arr, int len, int target)
{
    int head = 0;
    int tail = len - 1;
    int res;
    return binary_search(arr, head, tail, target);    
}

int binary_search(const int *arr, int min, int max, int k)
{
    int mid;
    if (min > max)
        return 0;
    mid = (int)(min+max)/2;
    printf("%d\n", arr[mid]);
    if (arr[mid] == k)
        return 1;
    else if (arr[mid] < k)
    {
        min = mid + 1;
        return binary_search(arr, min, max, k);
    }
    else
    {
        max = mid - 1;
        return binary_search(arr, min, max, k);
    }
    return 0;
}
