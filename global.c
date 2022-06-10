#include<stdio.h>
static float j= 4.67; //global float variable 

static double i = 5;//defining global varible accesible inside the file 
int main()
{
    register int h = 0;
    static float k = 9;
    printf("%.2f the global varible \n", i);
    printf("%.4f the global varible \n", j);
    printf("%.4f the float local varible \n", k);
    printf("%.4d the register int varible \n", h);
     return 0;

}
