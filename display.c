#include<stdio.h>

extern int i;
extern void display(void)
{
    //extern int i ;
    printf("the value of global variable is %d\n", i+1);

}
