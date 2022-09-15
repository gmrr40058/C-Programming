// Check a letter is vowel or consonant(2 type) Made by : G.M RIFAT REZA
#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    if(ch=='a')
        printf("%c is Vowel.\n",ch); //
    else if(ch=='e')
        printf("%c is Vowel\n",ch);
    else if(ch=='i')
        printf("%c is Vowel.\n",ch);
    else if(ch=='o')
        printf("%c is Vowel\n",ch);
    else if(ch=='u')
        printf("%c is Vowel.\n",ch);
    else if(ch=='A')
        printf("%c is Vowel.\n",ch);
    else if(ch=='E')
        printf("%c is Vowel.\n",ch);
    else if(ch=='I')
        printf("%c is Vowel.\n",ch);
    else if(ch=='O')
        printf("%c is Vowel.\n",ch);
    else if(ch=='U')
        printf("%c is Vowel.\n",ch);
    else
        printf("%c is Consonant.\n",ch);


}
/* As all the statement of all if and else if in this program are same so
we can use only one if(condition via logical or '||') without using else if again
and again and can make the program easy, short and time limited. The program will be...*/

/*#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is Vowel.\n",ch);
    else
        printf("%c is Consonant.\n",ch);

}*/
