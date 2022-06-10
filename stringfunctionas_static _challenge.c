#include<stdio.h>
#include "stringfunctions_challenge_static.h"

int numberofcharacterinstring(char *str , char searchcharacter)
{
    int i=0, frequency = 0;
    for (i=0;str[i]!='\0';++i)
    {
        if(searchcharacter == str[i])
            ++frequency;
    }
    return frequency;
}


int removenonalphacharacter(char *source)
{
    int i=0,j=0;
    for(i=0;source[i] != '\0';++i)
    {
        while(!((source[i]>='a' && source[i] <='z') || (source[i] >= 'A' && source[i] <='Z') || source[i] =='\0'))
        {
            for ( j=1 ; source[j] != '\0' ; ++j)
            {
                source[j] = source[j+1];


            }

            source[j]= '\0';

        }
    }

    return 0;

}

int lengthofstring(char *source)
{
    int l = 0;
    for ( l=0 ; source[l] != '\0'; ++l)
    
    return l;
}

int strconcat( char  *str1 , char *str2)
{
    int i=0, j='\0';
    for(i=0;str1[i] != '\0'; ++i)
    for(j=0 ; str2[i] != '\0';++j,++i)
    
    {
        str1[i] =str2[j];
        
    }

    str1 [ i] = '\0';
    return 0;
}

int strcopy(char  *source , char *destination)
{
    int i=0;
    for(i=0; source[i] != '\0';++i)
    {
        destination[i] = source[i];

    }
    destination[i] = '\0';

    return 0;
}

int substring(char *source , int from , int n , char *target)
{
    int l =0 , i=0;
    for( l=0; source[l] !='\0'; l++);
    if(from>l)

    {
        printf("starting index is invalid .\n");
        return i;

    }
    if((from+n)>l)
    {
        n = (l-from);
    }
    for(i=0; i<n;i++)
    {
        target[i] = source[from+i];
    }
    target[i] = '\0';
    return 0;
}