#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,sum1=0,sum2=0; //n denotes the number of rows and columns in the matrix arr.
    
    scanf("%d", &n);
    int arr[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d ", &arr[i][j]);
            //Taking diagonal sum of the matrix arr from the both side
            if(arr[i][j]>=-100 && arr[i][j]<=100)
            {
                if(i==j)
                {
                    sum1+=arr[i][j];
                }
                if(j==(n-1-i))
                {
                    sum2+=arr[i][j];
                }
            }
        }
    }
    // This code part belongs to the absolute difference between the sums of the matrix's along two diagonals
    if((sum1-sum2)<0)
    {
        printf("%d", (-((sum1)-(sum2))));
    }
    else
    {
        printf("%d", ((sum1)-(sum2)));
    } 
    return 0; 
}