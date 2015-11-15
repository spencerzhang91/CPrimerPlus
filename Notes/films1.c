/* films.c -- using struct array */
#include <stdio.h>
#define TSIZE 45	// max array size
#define FMAX 5   	// max film

struct film {
	char title[TSIZE];
	int rating;
};

int main(void)
{
	struct film movies[FMAX];
	int i = 0;
	int j;
	
	puts("Enter first movie title: ");
	while (i < FMAX && gets(movie[i].title) != NULL && movies[i].title[0] != '\0')
	{
		puts("Enter your rating (0-10): ");
		scanf("%d", &movie[i++].rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title (empty line to stop): ");
	}
	if (i == 0)
		printf("No data entered. \n");
	else
		printf("Here is the movie list: \n");
		
	for (j = 0; j < i; j++)
		printf("Movie: %s  Rating: %d\n", movies[j].title, movies[j].rating);
	printf("Bye!\n");
	
	return 0;
}
