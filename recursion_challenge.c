#include<stdio.h>
#include<stdlib.h>

int sumofrange(  int);

int main()
{
    int n1 = 0;
    int sum = 0;
    printf("\n Recursion: calculate the sum of numbers from 1 to n : \n\n");
    printf("---------------------------\n");
    printf("enter the number that range to last from 1 : ");
    scanf("%d", &n1);
    sum = sumofrange(n1);
    printf("\n the sum of numbers from 1 to %d : %d \n\n", n1 , sum);
    return 0;
}

int sumofrange(  int n1)
{
    int result = 0;
    if (n1 ==1)
        return 1;
    else
        result = n1+ sumofrange(n1-1);
    
    return result;
}