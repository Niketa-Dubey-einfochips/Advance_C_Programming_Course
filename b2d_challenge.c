#include<stdio.h>

int d2b (int a)
{
    //int i;
    int dec_value =0 ;
   // printf("enter the binary value which you want to convert into decimal \n ");
    //scanf("%d ", &a);
    int base = 1;
    int temp = a;
    while(temp)
    {
        int last_digit = temp%10;
        temp = temp/10;
        dec_value += last_digit*base;
        base = base*2;
    }
}

    int main()
    {
    int n;
    printf("enter the binary value which you want to convert into decimal \n ");
    scanf("%d ", &n);
        //d2b (1001);
    printf("the decimal value is %d",d2b(n));

    }
