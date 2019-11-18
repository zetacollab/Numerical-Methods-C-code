#include <stdio.h>
#include <stdlib.h>
float m(float x,float y)
{
    return(-1000*(y-(x+2))+1);

}

int main()
{
   float x_init,y_init;

   printf("Enter the value y_init \n");
   scanf("%f",&y_init);
   printf("Enter the value of x_init\n");
   scanf("%f",&x_init);
   int n;


   int n1;
   printf("Enter the number of values of h\n");
   scanf("%d",&n1);
   printf("Enter the value of h\n");
   float h[n1];
   int j;
   for(j=0;j<n1;j++)
   {
       scanf("%f",&h[j]);
   }


   //printf(" X_INIT  %f|| Y_INIT  %f\n",x_init,y_init);
   printf("\nH are :\n");

    for(j=0;j<n1;j++)
   {
       printf("%f  \n",h[j]);
   }
   int i;
   float x,y,f,a,b,k1,k2,k3,k4;
   for(j=0;j<n1;j++)
   {
       printf("\n\n\n######For h==%f\n",h[j]);
       a=x_init;
       b=y_init;
       float k=(0.01)/h[j];
       n=k;
        printf(" X_INIT  %f|| Y_INIT  %f\n",x_init,y_init);
        printf("A %f  B %f\n",a,b);
       printf("the number of iteration %d\n",n);

   for(i=0;i<n;i++)
   {   //printf("Iteration %d\n",i);
       k1=h[j]*m(a,b);
       k2=h[j]*m(a+h[j]/2,b+k1/2);
       k3=h[j]*m(a+h[j]/2,b+k2/2);
       k4=h[j]*m(x_init+(n+1)*h[j],b+k3);
       f=m(a,b);
       //printf("Function %f\n",f);
       y=b+(k1+2*k2+2*k3+k4)/6;
       x=a+h[j];

       a=x;
       b=y;

   }
   printf("Y  %f||X  %f\n",y,x);

   }


    return 0;
}
