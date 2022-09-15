#include <stdio.h>

int main()
{
  int a,b;
  float avg;
  printf("Enter two number\na= ");
  scanf("%d",&a);//input a.
  printf("b= ");
  scanf("%d",&b);//input b
  avg=(float)(a+b)/2;
  printf("Average of %d and %d is %.2f\n",a,b,avg);/*After Radix point want to take two decimal so %.2f,
                                                     if want to take 3,4,5 decimal respectively then
                                                        %.3f,%.4f,%.5f*/
}
