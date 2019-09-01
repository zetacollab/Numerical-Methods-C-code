#include <stdio.h>
#include <stdlib.h>
//ASHOK PRIYDARSHI
//Newton divided difference method
//f(x) = f [x0] + (x - x0) f [x0, x1] + (x - x0) (x - x1) f [x0, x1, x2]

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
   float n_r,d_r;


  printf("\n\nEnter X for finding f(x): ");
  scanf("%f",&p);
k=1;
  for(i=1;i<n;i++)
  {
      for(j=0;j<n-i;j++)
      {
      //printf("%f %f\t",x[j+k],x[j]);
        d_r=(x[j+k]-x[j]);
        //printf("%f \n",d_r);
          y[i][j]=(y[i-1][j+1]-y[i-1][j])/d_r;

      }
      k=k+1;
     // printf("###\n");

  }
  printf("\n");
  for(i=0;i<n;i++)
  {
      printf("%f ",x[i]);
      for(j=0;j<n-i;j++)
      {
          printf("%f ",y[j][i]);

      }
      printf("\n");
  }
  float ans=y[0][0],temp;
  for(i=1;i<n;i++)
  {
      temp=y[i][0];
      for(j=0;j<i;j++)
        temp=temp*(p-x[j]);
      ans=ans+temp;
  }
    printf("answer is %f",ans);



  return 0;
}
