#include<stdio.h>
#include<stdlib.h>

#include "stringfunctions_challenge_static.h"


int main()
{
    char temp[] = "niketa &&'''' dubey";
    char temp2[] = "apple";
    char temp3[100];
    printf("number of 'p's in apple is %d \n",numberofcharactersinstring(temp2 ,'p'));

    removenonalphacharacter(temp);

    printf("string temp with alpha character removed is :%s\n",temp);

    printf("string temp length is : %d \n", lenghtofstring(temp));

    strconcat(temp , temp2);
    printf("string concatenated with string2 is : %s \n", temp);

    strcopy(temp2, temp3);
    printf("string copied is : %s\n", temp3);

    substring(temp , 3,8,temp3);
    printf("substring is : %s\n", temp3);

    return 0;
}