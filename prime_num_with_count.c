#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, cont, i, j, m;
    printf("enter how many prime num you want");
    scanf("%d", &n);
    i = 3;
    m = 0;
    printf("2\t");
    do
    {
        cont = 0;
        for (j = 2; j < i; j++)
        {
            if (fmod(i, j) == 0)
            {
                cont += 1;
            }
        }
        if (cont == 0)
        {
            printf("%d\t", i);
            m += 1;
        }
        i += 1;
    } while (m < n-1);
    return 0;
}
