#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define M_PI 3.1415926
float f(float x)
{

    return (1/(float)(1+pow(x,2)));
}
float trpzl(float a,float b)
{
    float h=b-a;
    float ans=(h/2)*(f(b)+f(a));

    return ans;
}
float simp_one(float a,float b,float c)
{
    float h=(c-a)/2;
    float ans=(h/3)*(f(a)+f(c)+4*f(b));
    return ans;
}
float simp_three(float a,float b,float c,float d)
{
    float h=(d-a)/3;
    float ans=((3*h)/8)*(f(a)+f(d)+3*f(c)+3*(f(b)));
    return ans;

}
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d",&n);
    float *arr;
    arr=(float *)calloc(n+1,sizeof(float));
    float a,b;
    printf("Enter the first value of the interval\n");
    scanf("%f",&a);
     printf("Enter the last value of the interval\n");
    scanf("%f",&b);
    float d=(b-a)/n;
    arr[n]=b;
    arr[0]=a;
    float res=0,res1=0,res2=0;
    int i;
    for(i=1;i<n;i++)
        arr[i]=arr[i-1]+d;
    for(i=0;i<n;i++)
    {
        res=res+trpzl(arr[i],arr[i+1]);
    }
    printf("Answer from trapezoidal rule %f and eroor %f\n",res*4,fabs(M_PI-res*4));

    for(i=0;i<n-1;i=i+2)
    {
        res1=res1+simp_one(arr[i],arr[i+1],arr[i+2]);
    }
    printf("Answer from simpson one third rule %f and eroor %f\n",res1*4,fabs(M_PI-res1*4));
    for(i=0;i<n-2;i=i+3)
    {
        res2=res2+simp_three(arr[i],arr[i+1],arr[i+2],arr[i+3]);
    }
    printf("Answer from simpson three eighth rule %f and eroor %f\n",res2*4,fabs(M_PI-res2*4));


    return 0;
}
