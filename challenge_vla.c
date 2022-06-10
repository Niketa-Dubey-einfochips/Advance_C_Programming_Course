#include<stdio.h>
//int n;
int main()
{
//int arr[n];
int i , sum = 0, size =0;
printf("how many number of elements you want to enter \n");
scanf("%d",&size);
int arr[size];
printf("enter  %d elements in the array :", size);

//int arr[i];
//sum =0;
for (int i =0 ; i<=size; i++ )
{
    scanf("%d" , &arr[i]);
    //sum = sum+arr[i];
}

for (int i =0 ; i<=size; i++ )
{
    //scanf("%d" , &arr[i]);
    sum = sum+arr[i];
}

printf("the addition of all the elements os the array is :%d ", sum);

}