#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\t\t\t");
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}


/*   output :
enter your value :5
                        *
                        **
                        ***
                        ****
                        *****     */