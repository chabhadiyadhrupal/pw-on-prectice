//result
#include<stdio.h>
int main()
{
    float phy;
    float math;
    float che;
    float eng,total;
    printf("entr your phy marks:->");
    scanf("%f",&phy);
    printf("enter your math marks:->");
    scanf("%f",&math);
    printf("enter your che marks:->");
    scanf("%f",&che);
    printf("enter your eng marks:-");
    scanf("%f",&eng);
    total=(phy+math+che+eng)/4;
    printf(" percentage is:-%f",total);


}