#include<stdio.h>
void my_function_name(void)
{
    printf("%s was cancelled .\n",__func__);
}

int main()
{
    #if (__STDC__ ==1)
        printf("implementation is ISO- conforming\n");

    #else 
            printf("implementation is not iso - conforming\n");
    #endif

    printf(" file is %s line is %d \n", __FILE__,__LINE__);

    printf("program last compiled at %s on %s \n", __TIME__, __DATE__);

    my_function_name();
    //jason();
}