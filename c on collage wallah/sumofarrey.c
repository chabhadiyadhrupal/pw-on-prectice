/*#include<stdio.h>
int main()
{
    int arr[5];
    int a;
    for (int i=0; i<=4; i++)
    {
        printf("enter your nomber%d\n ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<=4; i++)
    {
        a=arr[i]+arr[i+1];
        printf("%d\t",a);

    }
}*/

//second mothod//
#include<stdio.h>
int main() 
{
    int arr[5];
    int  sum=0;

    for(int i=0; i<=4; i++)
    {
        printf("enter your number %d:->",i+1);
        scanf("%d",&arr[i]);

    } 
    for(int i=0; i<=4; i++)
    {
        sum=sum+arr[i];

    }
    printf("%d",sum);
}