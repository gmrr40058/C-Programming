#include <stdio.h>

int main()
{
   int i,number,sum=0,a;
   float avg;
   printf("Enter how many number you want to average: ");
   scanf("%d",&number);
   for(i=1;i<=number;i=i+1)
     {
       printf("Enter number: ");
       scanf("%d",&a);
       sum=sum+a;
     }
     avg=(float)sum/number;
     printf("Average is= %.1f",avg);
    return 0;
}
