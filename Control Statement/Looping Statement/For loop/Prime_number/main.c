#include <stdio.h>

main()
{
  int num,i,count=0;
  printf("Enter any positive number,\nnumber= ");
  scanf("%d",&num);
  for(i=2;i<num;i++)
  {
      if(num%i)
      {
         count++;
         break;
      }
  }
  if(num!=1 && count==0)//1 is not a prime number.
  {
      printf("%d is a Prime number.\n\n",num);
  }
  else
  {
      printf("%d is not a Prime number.\n\n",num);
  }
}
