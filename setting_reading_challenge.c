#include<stdio.h>

int main()
{
    int num , position , newnum, bitstatus;
    printf("enter any number \n");
    scanf("%d" , &num);

    printf("enter the nth bit to check and set(0-31) \n");
    scanf("%d", &position);

    bitstatus = (num >> position) & 1;
    printf(" the %d bit is set to %d\n", position , bitstatus);

    newnum = (1<< position) | num;
    printf("\n but set sucessfully \n\n");
    printf("the number before setting the bit is %d \n", num);
    printf("\nthe number after setting the bit is %d ", newnum);
    



}