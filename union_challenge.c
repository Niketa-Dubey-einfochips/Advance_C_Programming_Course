#include<stdio.h>

union  student
{
    char lettergrade;
    int roundegrade;
    float exactgrade;


}; 
//var1 , var2;

int main()
{


union student var1  ;
var1.lettergrade = 'A';
printf("the value of the letter grade is : %c", var1.lettergrade);
var1.roundegrade = 90;
printf("\nthe value of the round grade is : %d", var1.roundegrade);

var1.exactgrade = 90.456;
printf("\nthe value of the exact grade is : %f", var1.exactgrade);




}

    /* data */

