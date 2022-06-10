#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{

    int num= 123;
    int *singlepointer = NULL;
    int **doublepointer = NULL;
    singlepointer = &num ;
    doublepointer = &singlepointer;
     

    int a= 5;
    int *ptr;
    int **p ;
    ptr = &a;
    p = &ptr;
    printf("%d \n the value of single integer \n", a);
    printf("%d \n the value of single pointer  integer \n", *ptr);
    printf("%d \n the value of double pointer integer \n", **p);

    printf(" %d  the address of single pointer intreger variable \n ", &ptr);
    printf(" %d  the address of double pointer intreger variable \n ", &p);
   //printf(" %d  the address of single intreger variable \n ", ptr);
    //printf(" %d  the address of single intreger variable \n ", ptr);

}