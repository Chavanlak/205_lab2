#include<stdio.h>

int main()
{
    float t;
    char pro;
    double sum =0 ;
    scanf("%c",&pro);
    scanf("%f",&t);
    if(pro=='A')

    {
        sum = (t-200)*3 +199;
        printf("%.2f",sum);
    }
    if(pro=='B')
    {
        sum =(t-400)*2 +299;
         printf("%.3f",sum);
    }
    return 0;


}
