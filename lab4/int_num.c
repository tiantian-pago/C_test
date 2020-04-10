#include<stdio.h>
#include<math.h>

int main()
{
    int i,x,y;
    
    for(i=0;i<100000;i++){
       x = sqrt(i+100);
       y = sqrt(i+268);
       if(x*x==(i+100)&&y*y==(i+268))
         printf("\n%d\n",i);
    }
return 0;
}
