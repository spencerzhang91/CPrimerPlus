/* multi-layer pointers */
#include <stdio.h>

void func1(int *num);
void func2(int **num);
void func3(int num);
void func4(int **num);

int main(void)
{
    int number = 1;
    int *ptr;
    ptr = &number;
    func1(&number);
    printf("number = %d\n", number);
    func2(&ptr);
    printf("number = %d\n", number);
    func3(number);
    printf("number = %d\n", number);
    func4(&ptr);
    printf("number = %d\n", number);
    
    return 0;
}

void func1(int *num)
{
    printf("num %d at %p.\n", *num, num);
    ++(*num);
}

void func2(int **num)
{
    printf("pointer %p at %p.\n", *num, num);
    (**num)++;
}

void func3(int num)
{
    num++;
}

void func4(int **num)
{
    printf("%#x\n", num);
    num++;
    printf("%#x\n", num);
}
