#include <stdio.h>


int main()
{
    int A_array[]={5,10,15,20,25};// Here A_array is undefined size array. It's size will automatically defined by its number of element=5.
    int B_array[5]={100,200};// Here B_array is extra defined size array. As element number(2) is less than the size of array(5) so first two element will come as declared(100,200) others(3) elements will come 0.
    int C_array[2]={50,60,70,80,90};//Here B_array is less defined size array. As element number(5) is more than the size of array(2) so first two element will come declared value(50,60) others(3) element will come garbage value.
    int i;
    printf("Value of A_array\n");
    for(i=0;i<5;i++)
    {
        printf("A_array[%d]= %d\n",i,A_array[i]);
    }
    printf("\n\n\nValue of B_array\n");
    for(i=0;i<5;i++)
    {
        printf("A_array[%d]= %d\n",i,B_array[i]);
    }
    printf("\n\n\nValue of C_array\n");
    for(i=0;i<5;i++)
    {
        printf("A_array[%d]= %d\n",i,C_array[i]);
    }
}
