// wordcnt.c -- count characters, words and lines.
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
	char c;                     // read in character
	char prev;                  // character read before c
	long n_chars = 0L;          // number of characters
	int n_lines = 0;            // number of lines
	int n_words = 0;            // number of words
	int p_lines = 0;            // number of incomplete lines
	bool inword = false;        // if c is in a word, then inword is set true
	
	printf("Enter text to be analyzed(| to terminate): \n");
	prev = '\n';                // used to recoganize complete lines
	while ((c=getchar()) != STOP)
	{
		n_chars++;              // count characters
		if (c == '\n')
			n_lines++;			// count lines
		if (!isspace(c) && !inword)
		{
			inword = true;      // start a new word
			n_words++;          // count words
		}
		if (isspace(c) && inword)
			inword = false;     // to the end of a word
		prev = c;               // preserve the character		
	}
	if (prev != '\n')
		p_lines = 1;   			// count partial line (which could at most one)
	printf("characters = %ld, words = %d, lines = %d, ",
			n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	return 0;
}
