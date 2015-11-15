/* zippo2.c -- multi-dimensional array pointer */
#include <stdio.h>
int main(void)
{
	int tripo[2][3][2] = {
                           {
                            {1,2},{3,4},{5,6}
                           },
                           {
                            {7,8},{9,8},{7,6}
                           }
                         };
                         
    int zippo[4][2] = {{1,2},{3,4},{5,6},{7,8}};
	//int nippo[4][2] = {{1,2},{3,4},{5,6},{7,8}};	
	int (*pz)[2]; // pointer to a array with two elements
	int *pn;	
	pz = zippo;
	//pn = nippo;
	
	printf("size of int: %d\n\n", sizeof(int));
	
	printf("   pz = %#x\tpz+1 = %#x\n", pz, pz+1);
	printf("pz[0] = %#x\tpz+1 = %#x\n\n", pz[0], pz[0]+1);
	
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*(pz[0] + 1) = %d\n", *(pz[0] + 1));
	
	printf("*pz = %#x\t*pz + 1 = %#x\t*(pz+1) = %#x\n", *pz, *pz + 1, *(pz + 1));
	
	return 0;	
}
