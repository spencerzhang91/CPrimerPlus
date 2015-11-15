/* 5.11.2.c */
#include <stdio.h>
int main(void)
{
	int num;
	int n = 0;
	printf("Please enter a integer.\n");
	scanf("%d", &num);
	
	while (n <= 10)
	{
		printf("%d", num + n);
		printf(" ");
		n++;
	}
	printf("\nEnd of story.\n");
	return 0;
}
