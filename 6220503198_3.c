#include<stdio.h>
int main()
{
int x=3,a[x],i,j;
    char b[x];
    for ( i = 0; i < x; i++)
    {
       scanf("%d",&a[i]);
   }
   for ( i = 0; i < x; i++)
   {
       scanf(" %c",&b[i]);
   }
   i = 0;
    do
    {
    	if(i < x-1 && a[i] > a[i+1])
        {
        	j = a[i+1];
           a[i+1] = a[i];
            a[i] = j;
            i = 0;
        }
        else
        {
            i++;
        }
    }while(i < x);

    for ( i = 0; i < x; i++)
    {
        if (b[i]=='A')
        {
            printf("%d ",a[0]);
        }
        else if (b[i]=='B')
        {
            printf("%d ",a[1]);
        }
        else if (b[i]=='C')
        {
            printf("%d ",a[2]);
        }
    }
}
