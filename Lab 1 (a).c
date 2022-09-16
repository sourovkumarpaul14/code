#include <stdio.h>
int main()
{
    int a, b, n, Prime;

    printf("Find prime numbers 1 to : ");
    scanf("%d", &n);

    printf("All prime numbers 1 to %d are:\n", n);


    for(a=2; a<=n; a++)
    {

     Prime = 1;

        for(b=2; b<=a/2; b++)
        {
            if(a%b==0)
            {
                Prime = 0;
                break;
            }
        }

        if(Prime==1)
        {
            printf("%d,", a);
        }
    }
    return 0;
}
