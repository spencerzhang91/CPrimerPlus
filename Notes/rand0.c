/* rand0.c -- generate random number */
/* ANSI C portable algorithm */
static unsigned long int next = 1;   // seed
int rand0(void)
{
    /* magic formula */
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}
