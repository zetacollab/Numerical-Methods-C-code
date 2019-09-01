#include <stdio.h>
#include <stdlib.h>
typedef struct points
{
    float  x;
    float  y;
};
int main()
{
    int n;
    printf("Enter the number of data points \n");
    scanf("%d",&n);
    printf("Enter the x and y values\n");
    struct points point[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&point[i].x,&point[i].y);
    }
     for(i=0;i<n;i++)
    {
        printf("%f %f\n",point[i].x,point[i].y);
    }
    float x_find;
    printf("Enter the x_value for interpolation\n");
    scanf("%f",&x_find);

    printf("x_find is \n");
    printf("%f\n",x_find);


    int j;
    float result=0;
    float y_term=0;


    for(i=0;i<n;i++)
    {

    y_term=point[i].y;
    for(j=0;j<n;j++)
    {
         if(j!=i)
          y_term=y_term*(x_find-point[j].x)/(point[i].x-point[j].x);


    }
    result=result+y_term;
    }
    printf("the answer is %f  ",result);




    return 0;
}
