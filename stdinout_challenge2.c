#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    FILE *fptr = NULL;
    char path[100];
    printf("enter path of source file. ");
    scanf("%s", path);
    fptr = fopen(path, "r");
    if (fptr == NULL)
    {
        printf("\n unable to open the file \n");
        printf("please check the existing file ND YOU HAVE Read priviledge \n");
        exit(EXIT_FAILURE);
    }

    convertcase(fptr , path);

    return 0;

}

void convertcase(FILE *fptr , const char *path)
{
    FILE *dest = NULL;
    char ch = '\0';
    dest = fopen("temp.txt","w");
    if (dest ==NULL)
    {
        printf("unable to creat temporary file. ");
        fclose(fptr);
        exit(EXIT_FAILURE);

    }

    while((ch = fgetc(fptr))!= EOF)
    {
        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        else if (islower(ch))
        {
            ch = toupper(ch);

        }
        fputc(ch, dest);
    }
    fclose(fptr);
    fclose(dest);
    remove(path);
    rename("temp.txt", path);

}