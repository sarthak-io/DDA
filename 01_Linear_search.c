#include<stdio.h>
int main()
{
    int arr[]={1,5,7,6,9,3,},i=0,input;
    printf("Enter the number which you want to print\n");
    scanf("%d",&input);
    for(i;i<5;i++)
{
    if(input==arr[i]){
        printf("The given input present on %d :%d",i,arr[i]);
    }
}}