#include<stdio.h>

int main()
{
    int i,j;
    
    printf("\1\1\n");
    for(i=0;i<11;i++)
    {
       for(j=0;j<=i;j++)
         printf("%c%c",219,219);
       printf("\n");
    }

return 0;
}
