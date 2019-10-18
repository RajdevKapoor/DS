#include <stdlib.h>
#include<stdio.h>

int main()
{printf("Enter no to check whether prime or not\n");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {if(n%i==0)
   {

    printf("The given number %d is not prime",n);
     flag=1;
     break;
 }  }
 if(flag==0)
    printf("The given number %d is prime ",n);
return 0;
}