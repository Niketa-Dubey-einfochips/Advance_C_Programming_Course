#include<stdio.h>
#include<stdlib.h>

int main( int argc , char *argv[])
{
    FILE *fp = NULL;
    char ch = '\0';
    int wrd = 1, character = 1;
    if(argc ==1)
    {
        fp = stdin;
    }
    else if (argc == 2)
    {
        if((fp = fopen(argv[1], "r"))==NULL)
        {
            fprintf(stderr , "can't open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else{
        fprintf(stderr , "usage : %s [ filename] \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    
    ch = getc(fp);
    while (ch != EOF)
    {
        if(ch ==' '||ch=='\n')
        {
            wrd++;
        }
        else{
            character ++;

        }
        ch = getc(fp);
        /* code */
    }
    printf("\n the number of words in the file are : %d\n ",wrd-1);
    printf("the number of characters in the file are : %d\n\n ", character-1);
    fclose(fp);
    return 0;
    
    



}