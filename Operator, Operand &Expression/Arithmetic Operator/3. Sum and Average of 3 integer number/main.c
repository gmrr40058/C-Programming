#include <stdio.h>

int main()
{
  int a,b,c,sum;
  float avg;
  printf("Enter three integer number\na= ");
  scanf("%d",&a);//input a=2.
  printf("b= ");
  scanf("%d",&b);//input b=3.
  printf("c= ");
  scanf("%d",&c);//input c=4.
  sum=a+b+c;
  avg=(float)(sum)/3;
  printf("The Sum and Average of %d,%d and %d are\nSum= %d\nAverage= %.2f\n",a,b,c,sum,avg);/*After Radix point want to take two decimal so %.2f,
                                                     if want to take 3,4,5 decimal respectively then
                                                        %.3f,%.4f,%.5f*/
}
