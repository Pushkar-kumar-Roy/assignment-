https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true


#include"stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int d1=0,d2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                d1=d1+ar[i][j];
            }
            if(i+j==n-1)
            {
                d2=d2+ar[i][j];
            }
        }
        
    }
    if(d1>d2)
    printf("%d",d1-d2);
    else
    printf("%d",d2-d1);
    return 0;
}
