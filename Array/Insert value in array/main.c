#include <stdio.h>

int main()
{
   int a[5]={10,20,30,40,50}; // Declaring array a with elements 5 initialization value of array a.
   int i;
   int b[5]; // Declaring array a with elements 5.
   b[0]=100,b[1]=200,b[2]=300;// initializing value in array b in a line.
   b[3]=400;// initializing value in array b in multiple line.
   b[4]=500;// initializing value in array b in multiple line.

   for(i=0;i<5;i++)
   {
       printf("a[%d]= %d   b[%d]= %d\n",i,a[i],i,b[i]);
   }
}
