#include <stdio.h>

int main()
{
   int grade[5],i,j,sum=0;// Declare a array named grade which element are 5.
   float avg;

   for(i=0;i<5;i++)
   {
       printf("Enter %d'st array value:",i+1);
       scanf("%d",&grade[i]);//insert value in array.
       sum+=grade[i];
   }
   avg=(float)sum/i;
   printf("\n\nAverage is = %f",avg);
   printf("\n\n\nThe Inputed values.\n");
   for(j=0;j<5;j++)
   {
       printf("%dst value: %d\n",j+1,grade[j]);
   }
}
