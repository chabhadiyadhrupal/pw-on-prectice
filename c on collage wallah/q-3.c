#include<stdio.h>
int main()
{
    int arr[10]={67,45,97,34,73,24,64,29,34,75};
    for (int i=0; i<=9; i++)
    {
    if(arr[i]<=35)
        {
            printf(" %d it is a fail\n",i);
        }
    }
}