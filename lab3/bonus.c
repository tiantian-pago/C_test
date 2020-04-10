#include<stdio.h>

int main()
{
   long int i;
   int bonus1,bonus2,bonus3,bonus4,bonus5,bonus;

   bonus1 = 10000*0.1;
   bonus2 = bonus1+100000*0.075;
   bonus3 = bonus2 + 200000*0.05;
   bonus4 = bonus3 + 200000*0.03;
   bonus5 = bonus4 + 400000*0.015;

   printf("Please enter monthly profit:");
   scanf("%ld",&i);

   if(i<=100000)
      bonus = i*0.1;
   else if(100000<i<=200000)
      bonus = bonus1 + (i-100000)*0.075;
   else if(200000<i<=400000)
      bonus = bonus2 + (i-200000)*0.05;
   else if(400000<i<=600000)
      bonus = bonus3 + (i-40000)*0.03;
   else if(600000<i<=1000000)
      bonus = bonus4 + (i-600000)*0.015;
   else
      bonus = bonus5 + (i-1000000)*0.01;

   printf("bonus=%d\n",bonus);
return 0; 
}
