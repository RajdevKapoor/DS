#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, count=0,count1=0,k=0,space,i;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
            count++;

        }
        while(k!=2*i-1)
        {
            if(count<=rows-1)
            {
                printf("%d",i+k);
                count++;
            }
            else
            {   count1++;
                printf("%d",i+k-2*count1);
            } k++;
        } count=count1=k=0;
        printf("\n");
    }
    return 0;
}
