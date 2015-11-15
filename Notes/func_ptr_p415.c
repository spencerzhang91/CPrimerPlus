/* func_ptr.c -- use function pointer */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char showmenu(void);
void eatline(void);                      // read to end of line
void show(void(* fp)(char *), char *str);
void ToUpper(char *);                    // change to upper case
void ToLower(char *);                    // change to lower case
void Transpose(char *);                  // alter case
void Dummy(char *);                      // do not change string

int main(void)
{
    char line[81];
    char copy[81];
    char choice;
    void (* pfun)(char *);               // declaire function pointer pfun
    puts("Enter a string (empty line to quit): ");
    while (gets(line) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice)             // switch clause to set pointer
            {
                case 'u': pfun = ToUpper;   break;
                case 'l': pfun = ToLower;   break;
                case 't': pfun = Transpose; break;
                case 'o': pfun = Dummy;     break;
            }
            strcpy(copy, line);         // backup for line
            show(pfun, copy);           // use chosen function
        }
        puts("Enter a string (empty line to quit): ");
    }
    puts("Bye!");
    return 0;
}

char showmenu(void)
{
    char ans;
    puts("Enter menu choice: ");
    puts("u) uppercase  l) lowercase");
    puts("t) transposed case  o) original case");
    puts("n) next string");
    ans = getchar();                    // get user response
    ans = tolower(ans);                 // to lower case
    eatline();                          // delete remainings left in the line
    while (strchr("ulton", ans) == NULL)
    {
        puts("Please enter a, u, l, t, o, or n: ");
        ans = tolower(getchar());
        eatline();
    }
    return ans;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}

void ToUpper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void ToLower(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

void Transpose(char *str)
{
    while (*str)
    {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void Dummy(char *str)
{
    // change nothing
}

void show(void (*fp)(char *), char *str)
{
    (*fp)(str);                         // apply chosen function to str          
    puts(str);                          // show the result
}
