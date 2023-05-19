#include<stdio.h>
void dkpatel(int arr[])
{
     arr[0]=6;
    return ;

}
int main()
{
    int arr[3]={7,9,2};
    printf(" before:->%d",arr[0]);
    dkpatel(arr);
    printf("after :->%d",arr[0]);
}