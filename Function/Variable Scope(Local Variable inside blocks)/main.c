#include <stdio.h>

int main()
{
    int n=10;
    printf("In Scope level 1: n = %d\n",n);
    {
        n++;
        printf("In Scope level 2: n (n++) = %d\n",n);
        {
            int n=1;
            printf("In Scope level 3: n = %d\n",n);
            n++;
            printf("In Scope level 3: n (n++) = %d\n",n);

        }
        printf("In Scope level 2: n = %d\n",n);
    }
    printf("In Scope level 1: n = %d\n",n);
}
