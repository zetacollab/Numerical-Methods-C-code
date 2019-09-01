#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//Newton Raphson method
float f(float x)
{
    //return (x+cos(x));
    return(pow(x,2)-10);
}
float der_f(float x)
{
    return 2*x;
    //return(1-sin(x));
}

int main()
{

   float a,m;
   printf("This is not a bracketing algorithm\n");
   printf("enter the value of the a\n");
   scanf("%f",&a);

   int n,i;
   printf("enter the maximum no of iterations \n");
   scanf("%d",&n);
   float tol;
   printf("enter the tolerance limit \n");
   scanf("%f",&tol);

    for(i=0;i<=n;i++)
{
   float m=a-f(a)/der_f(a);
   if(fabs(f(m))<tol)
   {
       printf("#########\nANSWER\n");

       printf("m is %f and value is %f",m,f(m));
       exit(0);
   }
   else
   {
       a=m;
   }
   printf("%f \t%f\n",m,f(m));
}


    return 0;
}
