#include <stdio.h>

first_function(int x,float y,char ch)// Function definition,here x,y,ch are Formal parameters or parameters
{
    printf("Integer type variable is %d.\n",x);
    printf("Floating type variable is %f.\n",y);
    printf("Character type variable is %c.\n",ch);

}
int main()
{
    first_function(5,10,'d');// Function calling,here 5,10,d are actual parameters or arguments
    printf("Printing from main.\n");
    first_function(50,10.69,'D');// Function calling,here 50,10.69,D are actual parameters or arguments
    return 0;
}
