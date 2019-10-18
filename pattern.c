#include <stdlib.h>

int main()
{int i,j, rows, space;
printf("Enter the number of rows");
scanf("%d",&rows);
for(i=rows;i>=0;i--)
{
    for(space=1;space<=rows-i;++space)
        printf(" ");
    for(j=i;j<=2*i-1;++j)
        printf("* ");
    for(j=1;j<=i-1;j++)
        printf("* ");


    printf("\n");
}
return 0;