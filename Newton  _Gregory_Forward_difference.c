#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float fact(int a)
{
  float fac = 1;

  if (a == 0 || a==1)
   return (1);
  else
   fac = a * fact(a-1);

  return(fac);
}


int main()
{
    int n;
    printf("enter the number of values you want to insert\n");
    scanf("%d",&n);
    float x[n],y[n][n],p;
    int i,j,k=0;
    printf("enter the values of x and y respectively \n");


    for(i=0; i<n; i++)
  {
   printf("\n\nenter the value of x%d: ",i);
   scanf("%f",&x[i]);
   printf("\n\nenter the value of f(x%d): ",i);
   scanf("%f",&y[k][i]);
  }



  printf("\n\nEnter X for finding f(x): ");
  scanf("%f",&p);



  for(i=1;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
     y[i][j]=y[i-1][j+1]-y[i-1][j];
    }
  }


  for(i=0;i<n;i++)
  {
    printf("\n %.3f",x[i]);
    for(j=0;j<n-i;j++)
    {
     printf("   ");
     printf(" %.3f",y[j][i]);
    }
   printf("\n");
  }
  float a=x[0];
  printf("a is %f\n",a);
  float ans=y[0][0];
  printf("Init_ans is %f\n",ans);
  float h=x[1]-x[0];
  printf("h is %f\n",h);
  float m=(p-a)/h;
  printf("m is %f\n",m);

  float arr_m[n];
  arr_m[1]=m;
  for(i=2;i<n;i++)
  {
      arr_m[i]=arr_m[i-1]*(m-1)/fact(i);
  }

  printf("\n#######\n");
  for(i=1;i<n;i++)
  {
      printf("%f \n",arr_m[i]);
  }

  printf("\n#######\n");
  printf("%f +",ans);

  for(i=1;i<n;i++)
  {

     float  temp=y[i][0]*arr_m[i];
      printf("%f +",temp);
      ans=ans+temp;

  }

  printf("\nanswer is %f ",ans);








return 0;

}
