#include<stdio.h>

#define SQUARE(x) (x*x)
#define CUBE(x) (x*x*x)

int main()
{
    int num= 0;
    printf("enter any number : \n");
    scanf("%d ",&num);
    printf("\n the square of the num is %d and the cube of the number is %d \n", SQUARE(num), CUBE(num) );
    
    return 0;
}