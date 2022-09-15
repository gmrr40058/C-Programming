//Use of getchar() and putchar() functions.
#include <stdio.h>

void main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch); //ch=getchar();// getchar() read a single character.
    printf("You enter %c",ch);
    /*printf("You enter: ");
    putchar(ch);*/ // putchar() print a single character.
}

