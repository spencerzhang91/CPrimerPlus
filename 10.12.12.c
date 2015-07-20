/* 10.12.12.c */
double trots[20];
short clops[10][30];
long shots[5][10][15];

(a)
void func1(int *ptr, int n);
func1(trots, 20);
void func1(int n, int *ptr);
func1(20, trots);

(b)
void func2(short (*ptr)[30], int n);
func2(clops, 30);
void func2(int n, int m, short *((*ptr + n) + m));
func2(10, 20, clops);

(c)
void func3(long (*ptr)[10][15], int i, int j);
func3(shots, 10, 15);
void func3(int i, int j, int k, long ar[i][j][k]);
func3(5,10,15,shots);
