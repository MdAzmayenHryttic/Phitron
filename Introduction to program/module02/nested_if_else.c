#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk > 5000)
    {
        printf("cox's bazar jabo\n");
        if (tk > 1000)
        {
            printf("saint martin jabo\n");
        }
        else
        {
            printf("jabo na\n");
        }
    }
    else
    {
        printf("kothao jabo nah\n");
    }

    return 0;
}