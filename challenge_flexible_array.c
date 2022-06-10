#include<stdint.h>
#include<malloc.h>
struct myarray {
    int lenght;
    int array[];
} ;

int main()
{
    struct  myarray *m = NULL;
    int arraySize =0;
    printf("enter the size of the flexible array \n");
    scanf("%d ", &arraySize);
    size_t size = sizeof(struct myarray);
    m = malloc(size + sizeof(int)*arraySize );

    m->lenght = arraySize ;
    m->array[0] = 55;
    m->array[1] =  199;

    return 0;   
    
}
