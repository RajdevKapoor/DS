#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
   {
    int n, i, *p, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = calloc(10, sizeof(double) );

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", p + i);

    }
    for(i = 0; i < n; ++i)
    {
        sum += *(p + i);

    }


    printf("Sum = %d", sum);
    return 0;
}
