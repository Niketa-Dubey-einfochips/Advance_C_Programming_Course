#include<stdio.h>
int findGCD(int num1 , int num2);
int main()
{
    int num1 = 0 , num2 = 0 , gcd =0;
    printf("\n\n recuresion : find gcd of two numbers : \n");
    printf("---------------------------------\n\n");

    printf("input 1st number: ");
    scanf("%d", &num1);

    printf("input 2nd number: ");
    scanf("%d", &num2);

    gcd = findGCD(num1, num2);

    printf("\n\n the gcd of % d and %d is %d \n", num1 , num2 , gcd);

    return 0;
}

int findGCD(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return findGCD(a-b,b);
        }
        else{
            return findGCD(a,b-a);
        }
        return a;
    }
}