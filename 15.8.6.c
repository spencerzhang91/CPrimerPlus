/* 15.8.6.c */
#include <stdio.h>
#include <ctype.h>
#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define ON 1
#define OFF 0

struct font {
    unsigned int font_id: 8;
    unsigned int font_size: 7;
    unsigned int alignment: 2;
    unsigned int bold: 1;
    unsigned int italic: 1;
    unsigned int underline: 1;
};

void change_font(struct font *pf);
void change_size(struct font *pf);
void change_alig(struct font *pf);
void change_bius(struct font *pf, int key);
void display(const struct font *pf);
void show_menu(void);

int main(void)
{
    char choice[10];
    struct font sample = {1, 12, LEFT, OFF, OFF, OFF};
    struct font *sp = &sample;
    
    display(sp);
    show_menu();
    gets(choice);
    while (choice[0] != 'q')
    {
        switch (choice[0])
        {
            case 'f': change_font(sp); break;
            case 's': change_size(sp); break;
            case 'a': change_alig(sp); break;
            case 'b': change_bius(sp, 0); break;
            case 'i': change_bius(sp, 1); break;
            case 'u': change_bius(sp, 2); break;
            default: puts("Please enter options correctly");            
        }
        display(sp);
        show_menu();
        gets(choice);   
    }
    puts("End of program");
    return 0;
}

void show_menu(void)
{
    puts("f) change font   s) change size     a) change alignment");
    puts("b) toggle bold   i) toggle italic   u) toggle underline");
    puts("q) quit");
}

void display(const struct font *pf)
{
    char alig[3][10] = {"left", "center", "right"};
    puts(" ID  SIZE   ALIGNMENT  B  I  U");
    printf("%3d %3d %8s %7d %2d %2d\n\n", pf->font_id, pf->font_size,
                                          alig[pf->alignment], pf->bold,
                                          pf->italic, pf->underline);
}

void change_font(struct font *pf)
{
    int id;
    printf("Please enter font ID (0-255):\n");
    if (scanf("%d", &id) != 1)
        printf("Invalid input.");
    pf->font_id = id;
    getchar();
}

void change_size(struct font *pf)
{
    int size;
    printf("Please enter font size (0-127):\n");
    if (scanf("%d", &size) != 1)
        printf("Invalid input.");
    pf->font_size = size;
    getchar();
}

void change_alig(struct font *pf)
{
    char mode[10];
    printf("Please enter alignment mode (left, center or right): \n");
    gets(mode);
    switch (tolower(mode[0]))
    {
        case 'l': pf->alignment = LEFT; break;
        case 'c': pf->alignment = CENTER; break;
        case 'r': pf->alignment = RIGHT; break;
        default: puts("Invalid input.");
    }
}

void change_bius(struct font *pf, int key)
{
    switch (key)
    {
        case 0: pf->bold ^= ON; break;
        case 1: pf->italic ^= ON; break;
        case 2: pf->underline ^= ON; break;
        default: puts("Invalid input.");
    }
}
