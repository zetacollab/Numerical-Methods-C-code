#include <stdio.h>
#include <stdlib.h>
float org(float x1,float x2,float x3,float x4)
{
return(x1+4*x2-x3-x4+1);
}
float X_1(float x2,float x3,float x4)
{
    return((-2-x2+x3-x4)/4);
}
float X_2(float x3,float x4,float x1)
{
    return((-1+x3+x4-x1)/4);
}
float X_3(float x4,float x1,float x2)
{
    return((x1+x2-x4)/5);
}
float X_4(float x2,float x3,float x1)
{
    return((1-x1+x2-x3)/3);
}

int main()
{
    float x1=0,x2=0,x3=0,x4=0;
    float a,b,c,d;
    int iter_max=5,tol=0.01;
    int i=0;


        while(fabs(org(x1,x2,x3,x4))>tol)
        {

        //printf("X1: %f X2 :%f X3 %f X4 %f\n",x1,x2,x3,x4);
        //printf("Org %f\n",org(x1,x2,x3,x4));
        a=X_1(x2,x3,x4);
        b=X_2(x3,x4,x1);
        c=X_3(x4,x1,x2);
        d=X_4(x2,x3,x1);

        //printf("a: %f b :%f c %f d %f\n",a,b,c,d);
        x1=a;x2=b;x3=c;x4=d;
        i++;

        }
    printf("JACOBI METHOD\n");
    printf("\tAnswer###\n");
    printf("Iteration %d\n",i);
    printf("X1: %f X2 :%f X3 %f X4 %f\n",x1,x2,x3,x4);
    printf("Org %f\n",org(x1,x2,x3,x4));
    printf("##############################################################################\n");


        i=0;

        x1=0,x2=0,x3=0,x4=0;
        while(fabs(org(x1,x2,x3,x4))>tol)
        {
        //printf("X1: %f X2 :%f X3 %f X4 %f\n",x1,x2,x3,x4);
        //printf("Org %f\n",org(x1,x2,x3,x4));
        x1=X_1(x2,x3,x4);
        x2=X_2(x3,x4,x1);
        x3=X_3(x4,x1,x2);
        x4=X_4(x2,x3,x1);
        i++;
        }
    printf("\tAnswer###\n");
    printf("Iteration %d\n",i);
    printf("X1: %f X2 :%f X3 %f X4 %f\n",x1,x2,x3,x4);
    printf("Org %f\n",org(x1,x2,x3,x4));





    return 0;
}
