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
   float x,y,f,a,b;
   for(j=0;j<n1;j++)
   {
       printf("\n\n\n######For h==%f\n",h[j]);
       a=x_init;
       b=y_init;
       float k=(0.01)/h[j];
       n=k;
        printf(" X_INIT  %f|| Y_INIT  %f\n",x_init,y_init);
        //printf("A %f  B %f\n",a,b);
        f=m(a,b);
       // printf("Function %f\n",f);
       printf("the number of iteration %d\n",n);

   for(i=0;i<n;i++)
   {   //printf("Iteration %d\n",i);
       f=m(a,b);
       //printf("Function %f\n",f);
       y=b+h[j]*f;
       x=a+h[j];

       a=x;
       b=y;

   }
    printf("Y  %f||X  %f\n",y,x);
   }


    return 0;
}
