#include<stdio.h>
int main()
{
    int arr[5];
    int min;
    for (int i=0; i<=4; i++)
    {
        printf("enter your nu %d:->",i+1);
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for (int i=0; i<=4; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];

        }
    }
    printf("minimum number is%d",min);
}
