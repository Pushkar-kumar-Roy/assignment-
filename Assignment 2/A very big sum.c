https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true


#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    long sum=0;
    long ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+ar[i]; 
    }
    printf("%ld",sum);
    return 0;
}
