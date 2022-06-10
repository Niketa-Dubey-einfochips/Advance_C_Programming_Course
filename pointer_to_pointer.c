#include<stdio.h>
#include<malloc.h>
#include<string.h>  

void foo (char *ptr)
{
    ptr = malloc(255);
    strcpy(ptr,"hello world \n");
    //their  is memory leak because of the without allocating memory .
}

int main()
{
    char *ptr = NULL;
    foo(ptr);

    printf("%s\n", ptr);
    free(ptr);
    }
    //gives error because without allocating memory we are trying to free the ptr
    // its only create copy of the pointer from the function .





/*void foo(int **ptr) //copy
{
    int a=5;
    *ptr = &a;


}*/

/*int main()
{
    int *ptr = NULL;
     ptr = (int *)malloc(sizeof(int));
     *ptr = 10;
     foo(&ptr);
     printf("%d\n",*ptr);
     return 0;

}*/