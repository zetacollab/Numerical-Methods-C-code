#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the no of rows in matrix\n");
    int m,n;
    scanf("%d",&m);
    printf("Enter the no of columns in matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    float arr[m][n];
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Element %d %d:",i,j);
            scanf("%f",&arr[i][j]);
        }
    }
    float coeff[m][1];
    printf("Enter the coeffecients of equation\n");
     for(i=0;i<m;i++)
        {
            printf("Coeff %d :",i);
            scanf("%f",&coeff[i][0]);
        }


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f \t",arr[i][j]);

        }
        printf("%f \n",coeff[i][0]);
    }


    double c;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            {
                if(i>j)
                {
                    c=arr[i][j]/arr[j][j];
                    for(k=0;k<n;k++)
                    {
                        arr[i][k]=arr[i][k]-c*arr[j][k];
                    }
                    coeff[i][0]=coeff[i][0]-c*coeff[j][0];
                }
            }
        }
    }



    printf("######\n");

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f \t",arr[i][j]);

        }
        printf("%f \n",coeff[i][0]);
    }

    float ans[n],sum;
    for(i=m-1;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum=sum+arr[i][j]*ans[j];
        }

        ans[i]=(coeff[i][0]-sum)/arr[i][i];

    }

printf("Answer is ####\n");
for(i=0;i<n;i++)
    printf("%f ",ans[i]);




    return 0;
}
