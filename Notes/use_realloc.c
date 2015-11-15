/* using realloc function */
#include <stdio.h>
#include <stdlib.h>

char *getLine(void);

int main(void)
{
    getLine();
    
    return 0;
}

char *getLine(void)
{
    const size_t sizeIncrement = 10;
    char *buffer = malloc(sizeIncrement);
    char *currentPosition = buffer;
    size_t maximumLength = sizeIncrement;
    size_t length = 0;
    int character;
    
    if (currentPosition == NULL)
        return NULL;
    
    while (1)
    {
        character = fgetc(stdin);
        if (character == '\n')
            break;
        
        if (++length >= maximumLength)
        {
            char *newBuffer = realloc(buffer, maximumLength += sizeIncrement);
            
            if (newBuffer == NULL)
            {
                free(buffer);
                return NULL;
            }
            currentPosition = newBuffer + (currentPosition - buffer);
            buffer = newBuffer;
        }
        *currentPosition++ = character;
    }
    *currentPosition = '\0';
    return buffer;
}
