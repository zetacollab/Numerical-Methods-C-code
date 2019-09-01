#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//ASHOK PRIYDARSHI
//Fixed point iteration method

/*Fixed point :  A point, say, s is called a fixed point if it satisfies the equation x = g(x).
Fixed point Iteration : The transcendental equation f(x) = 0 can be converted algebraically into the form x = g(x)
and then using the iterative scheme with the recursive relation
xi+1= g(xi),           i = 0, 1, 2, . . */

float f_org(float x)//Given function f(x)
{
    return(pow(x,2)+10*cos(x));
}
float g_x(float x)//Iterative function  g(xi),
{
    return (x-(f_org(x)/(2*x-10*sin(x))));
    //return(1-sin(x));
}


int main()
{

   float a,m;
   printf("This is not a bracketing algorithm\n");
   printf("enter the initial guess of the x\n");
   scanf("%f",&a);

   int n,i;
   printf("enter the maximum no of iterations \n");
   scanf("%d",&n);
   float tol;
   printf("enter the tolerance limit \n");
   scanf("%f",&tol);

    for(i=0;i<=n;i++)
{
   float m=g_x(a);
   if(fabs(f_org(m))<tol)
   {
       printf("#########\nANSWER\n");

       printf("m is %f and value is %f",m,f_org(m));
       exit(0);
   }
   else
   {
       a=m;
   }
   printf("m: %f \t Value at m%f\n",m,f(m));
}


    return 0;
}
