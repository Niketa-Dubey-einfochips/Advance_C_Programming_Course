#include<stdio.h>
#include<malloc.h>
#include<string.h>  

void foo (char **ptr)
{
    *ptr = malloc(255);
    strcpy(*ptr,"hello world\n");
    //their  is memory leak because of the without allocating memory .
}

int main()
{
    char *ptr = NULL;
    foo(&ptr);

     printf("%s\n", ptr);
    free(ptr);
    }

