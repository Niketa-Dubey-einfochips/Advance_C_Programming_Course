#include<stdio.h>

#define IS_LOWER(x) (x >='a' && x<='z')
#define IS_UPPER(x) (x>='A'&& x<= 'Z')
int main()
{
    char c ;
    printf("enter the  alphabet \n ");
    scanf("%c", &c);
    if(IS_UPPER(c)){
    printf(" the entered character is uppercase  %c \n",c );
    }
    else if (IS_LOWER(c))
    {

    printf(" the entered character lowercase is %c \n", c );

    }
    else 
    {
        printf("entered character is not alphabet \n");
    }

return 0;


}