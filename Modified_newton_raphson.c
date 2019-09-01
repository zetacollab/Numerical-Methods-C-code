#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//ASHOK PRIYDARSHI
//Modified Newton Raphson  method




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
float h_x(float x)
{
   return (f(x)/(float)der_f(x));
}
float derf_h_x(float x)
{
    return ((2*pow(x,2)+20)/(4*pow(x,2)));
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
   float m=a-h_x(a)/derf_h_x(a);
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
