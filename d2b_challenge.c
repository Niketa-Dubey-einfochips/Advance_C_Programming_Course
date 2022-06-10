#include<stdio.h>
long long d2b(int );
int main()
{
    long long i;
    printf("entre the decimal value to which you want to convert into binary  \n");
    scanf("%lld", &i);
    printf("the binary value of the decimal value is %lld", d2b(i));
}

long long d2b(int a)
{
    int base = 1;
    int bin_value = 0;
    int temp = a;
    while(temp != 0)
    {
       int last= temp%2;
       temp = temp/2;
       bin_value += last*base;
       base*=10;
    }
    return bin_value;


}