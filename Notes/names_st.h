// names_st.h -- headfile of names_st 
#ifndef NAMES_H_
#define NAMES_H_
// constants
#define SLEN 32
// structure declairation
struct names_st {
    char first[SLEN];
    char last[SLEN];
};

// type defination
typedef struct names_st names;

// function prototype
void get_names(names *);
void show_names(const names *);
#endif
