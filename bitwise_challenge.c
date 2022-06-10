#include<stdio.h>
int d2b (long long  a)
{
    int base = 1;
    int binary_value = 0;
    int last_value = 0;
    while (a != 0)
    {
        last_value= a%2;
        a = a/2;
        binary_value = binary_value + last_value * base;
        base = base*10;


    }
    return binary_value;

}



int main()
{
    long long a,b;
    long long negation_1, negation_2;
    long long anding, oring,xoring,leftshift,rightshift;


    printf("enter an integer \n");
    scanf("%lld", &a);
    printf("enter another integer \n");
    scanf("%lld" , &b);
    int b_num2 = d2b(a);
    printf("value of a in binary %d \n" , b_num2);
    negation_1 = ~a;
    int b_num1 = d2b(negation_1);
    //printf("the value in binary is %d" , b_num1);
    printf("the negation of a  is %d", d2b(negation_1));
    negation_2 = ~b;

    anding = a & b;
    oring = a| b;
    xoring = a^b;
    leftshift = a << 1;
    rightshift = a >> 1;

}
