#include <stdio.h>

void array_f(int get_array[]);
int main()
{
    int niton[5]={10,20,30,40,50};
    array_f(niton);// niton array as a argument.
}
void array_f(int get_array[])//get_array array as a parameter
{
    int n;
    for(n=0;n<5;n++)
    {
        printf(" %d\n",get_array[n]);
    }
}
