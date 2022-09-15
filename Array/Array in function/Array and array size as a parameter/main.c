#include <stdio.h>

void array_f(float get_array[],int);
int main()
{
    float A_array[5]={10.0,20.1,30.2,40.3,50.4},B_array[4]={5.5,-4.4,6.6,-3.3};
    float C_array[3]={100.56,-200.78,300.49};
    printf("Values of A_array \n");
    array_f(A_array,5);
    printf("Values of B_array \n");
    array_f(B_array,4);
    printf("Values of C_array \n");
    array_f(C_array,3);
}
void array_f(float get_array[],int size)
{
    int n;
    for(n=0;n<size;n++)
    {
        printf(" %f\n",get_array[n]);
    }
}
