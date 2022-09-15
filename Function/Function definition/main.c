#include <stdio.h>

void first_function()
{
    printf("Printing from first Function.\n");
}
int main()
{

    first_function();
    printf("Printing from main.\n");
    first_function();
    return 0;
}
