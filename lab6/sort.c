#include<stdio.h>

void sort(int *a,int *b)
{
    int temp;
    if(*a > *b)
   {
     temp = *a;
     *a = *b;
     *b = temp;
   }
}

int main()
{
   int x,y,z;
   void sort(int *a,int *b);

   printf("please enter 3 int numbers:");
   scanf("%d%d%d",&x,&y,&z);
   if(x>y) sort(&x,&y);
   if(x>z) sort(&x,&z);
   if(y>z) sort(&y,&z);
   
   printf("\n%d %d %d\n",x,y,z);

return 0;
}
