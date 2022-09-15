// Check a letter is vowel or consonant(2 type)
#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("%c is Vowel.\n",ch);
        break;
    case 'e':
        printf("%c is Vowel.\n",ch);
        break;
    case 'i':
        printf("%c is Vowel.\n",ch);
        break;
    case 'o':
        printf("%c is Vowel.\n",ch);
        break;
    case 'u':
        printf("%c is Vowel.\n",ch);
        break;
    case 'A':
        printf("%c is Vowel.\n",ch);
        break;
    case 'E':
        printf("%c is Vowel.\n",ch);
        break;
    case 'I':
        printf("%c is Vowel.\n",ch);
        break;
    case 'O':
        printf("%c is Vowel.\n",ch);
        break;

    case 'U':
        printf("%c is Vowel.\n",ch);
        break;
    default:
         printf("%c is Consonant.\n",ch);
        break;

    }

}

/* As all the statement of all case in this program are same so
we can use only one statement after all case without writing same statement again
and again and can make the program easy, short and time limited. The program will be...*/

/*#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is Vowel.\n",ch);
            break;
        default:
            printf("%c is Consonant.\n",ch);
            break;

    }

}*/

//We can also write the cases in one line like below.

/*#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a letter g: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("%c is Vowel.\n",ch);
            break;
        default:
            printf("%c is Consonant.\n",ch);
            break;

    }

}*/
