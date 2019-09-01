#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//Bisection method


float f(float x)
{
    return (pow(x,2)-10);

}
int main()
{
   float a,b;
   printf("enter the value of interval\n");
   printf("enter the value of the a\n");
   scanf("%f",&a);
   printf("enter the value of the b\n");
   scanf("%f",&b);
   if(f(a)*f(b)>0)
   {
     exit(0);
   }
   int n,i;
   printf("enter the maximum no of iterations \n");
   scanf("%d",&n);
   float tol;
   printf("enter the tolerance limit \n");
   scanf("%f",&tol);

   for(i=0;i<=n;i++)
{
   float m=(a+b)/2;
   if(fabs(f(m))<tol)
   {
       printf("#########\nANSWER\n");

       printf("m is %f and value is %f",m,f(m));
       exit(0);
   }
   else if(f(a)*f(m)>0)
   {
       a=m;
   }
   else
   {
       b=m;
   }
   printf("%f \t%f\n",m,f(m));
}


   return 0;
}
