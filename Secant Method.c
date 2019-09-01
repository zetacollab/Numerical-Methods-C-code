#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//Secant Method
float f(float x)
{
    return (pow(x,2)-10);

}
int main()
{
   float a,b;
   printf("This is not a bracketing algorithm\n");
   printf("enter the value of the a\n");
   scanf("%f",&a);
   printf("enter the value of the b\n");
   scanf("%f",&b);

   int n,i;
   printf("enter the maximum no of iterations \n");
   scanf("%d",&n);
   float tol;
   printf("enter the tolerance limit \n");
   scanf("%f",&tol);

   for(i=0;i<=n;i++)
{
   float m=b-f(b)*(b-a)/(f(b)-f(a));
   if(fabs(f(m))<tol)
   {
       printf("#########\nANSWER\n");

       printf("m is %f and value is %f",m,f(m));
       exit(0);
   }
   else
   {   a=b;
       b=m;
   }
   printf("%f \t%f\n",m,f(m));
}


   return 0;
}
