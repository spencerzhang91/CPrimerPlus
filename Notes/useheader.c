// useheader.c -- use names_st structure 
#include <stdio.h>
#include "names_st.h"
// remember to link names_st.c file 

int main(void)
{
    names candidate;
    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this program!\n");
    
    return 0;
}
