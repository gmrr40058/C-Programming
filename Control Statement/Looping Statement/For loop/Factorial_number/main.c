#include <stdio.h>

 main()
{
   int num,i,fac=1;
   printf("Enter the number which you want to factorial\n");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
       if(num==0)
        {
            fac=1;
        }


       else
          {
               fac=fac*i;
          }


   }
   printf("%d!= %d",num,fac);
}
