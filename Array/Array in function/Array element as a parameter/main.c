#include <stdio.h>

int array_ele(int,int);
int main()
{
    int A_array[]={10,20,30,40,50};
    printf("\n Return value = %d",array_ele(A_array[1],A_array[3]));
}
int array_ele(int val_1,int val_2)
{
    int y;
    y=val_1*val_2;
    return y;
}
