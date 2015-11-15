/* randbin.c -- random binary in & out */
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(void)
{
    double numbers[ARSIZE];
    double value;
    const char *file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;
    // create a group of double value
    for (i = 0; i < ARSIZE; i++)
        number[i] = 100.0 * i + 1.0 / (i + 1);
    // try open the file 
    if ((iofile = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "Could not open file %s for output.\n", file);
        exit(1);
    }
    // write data in the array into file in binary form
    fwrite(numbers, sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if ((iofile = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "Could not open file %s for random access.\n"), file);
        exit(1);
    }
    // read out selected item from file
    printf("Enter an index in the range 0-%d.\n", ARSIZE -1);
    scanf("%d", &i);
    while (i >= 0 && i < ARSIZE)
    {
        pos = (long)i * sizeof(double); // calculate offset
        fseek(iofile, pos, SEEK_SET);   // point to that place
        fread(&value, sizeof(double), 1, iofile);  // copy 1 double length value from iofile pointer pointed position to value
        printf("The value there is %f.\n", value);
        printf("Next index (out of range to quit): \n");
        scanf("%d", &i);
    }
    fclose(iofile);
    puts("Bye!");
    return 0;
}
