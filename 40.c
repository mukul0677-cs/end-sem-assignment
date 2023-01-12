/** 
* C program to print natural numbers using while loop 
*/ 
#include <stdio.h>

int main() 
{ 
    /* Loop counter variable declaration and initialization*/ 
    int n = 1; 

    /* Loop condition */ 
    while(n <= 10) 
    { 
        /* Body of loop */ 
        printf("%d ", n); 

        /* Update loop counter variable */ 
        n++; 
    }

    return 0;
}