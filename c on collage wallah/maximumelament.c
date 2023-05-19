#include<stdio.h>
int main()
{
    int arr[6];
    int max;
    for(int i=0; i<=5; i++)
    {
        printf("enter your number:%d->",i+1);
        scanf("%d",&arr[i]);

    }
    max=arr[0];
    for(int i=0; i<=5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];

        }
    }
    printf(" maximum number is:->%d",max);
}