#include<stdio.h>

 int sum (int num)
{
// int num;
    //scanf("%d " , &num);
    static int result;
   // auto int i = 0;
    
    result = num+result;
     return result;

    //num +=num;




}

int main()
{
    printf("%d \n", sum(25));
    printf("%d \n", sum(30));
    printf("%d \n", sum(15));

}