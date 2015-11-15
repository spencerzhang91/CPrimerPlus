/* fields.c -- define and use field */
#include <stdio.h>
/* opaque or not */
#define YES    1
#define NO     0
/* border style */
#define SOLID  0
#define DOTTED 1
#define DASHED 2
/* three basic color */
#define BLUE   4
#define GREEN  2
#define RED    1
/* mixed colors */
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)
const char *colors[8] = {"black", "red", "green", "yellow",
                "blue", "magenta", "cyan", "white"};

struct box_props {
    unsigned int opaque:        1;
    unsigned int fill_color:    3;
    unsigned int :              4;
    unsigned int show_border:   1;
    unsigned int border_color:  3;
    unsigned int border_style:  2;
    unsigned int :              2;
};

void show_settings(const struct box_props *pb);

int main(void)
{
    /* create and initialize box_props structure */
    struct box_props box = {YES, YELLOW, YES, GREEN, DASHED};
    puts("Original box settings:");
    show_settings(&box);
    
    return 0;
}

void show_settings(const struct box_props *pb)
{
    printf("Box is %s.\n", pb->opaque == YES? "opaque": "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", pb->show_border == YES? "showm": "hidden");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("The border style is ");
    switch (pb->border_style)
    {
        case SOLID: puts("solid."); break;
        case DOTTED: puts("dotted."); break;
        case DASHED: puts("dashed."); break;
        default: puts("unknown type.");
    }
}
