#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int addingnumers(int nhowmany, ...);
int main(void)
{
    printf("variadic functions \n ");
    printf("\n 10+20 = %d ", addingnumers(2,10,20));
    printf("\n 10+20+30 = %d ", addingnumers(3,10,20,30));
    printf("\n 10+20+40 = %d ", addingnumers(4,10,20,30,40));

    printf("\n\n");
    return 1;

}

int addingnumers(int nhowmany, ...)
{
    int sum = 0;
    va_list intargumentpointer;
    va_start(intargumentpointer,nhowmany);
    for(int i=0 ; i<nhowmany ;i++)
    {
        sum += va_arg(intargumentpointer, int);
    }
    va_end(intargumentpointer);
    return sum;

}