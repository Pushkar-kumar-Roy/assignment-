https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true


#include"stdio.h"




int main()
{
    long ar[5];
    long sum1=0,sum2=0;
    for(int i=0;i<5;i++)
    {
        scanf("%ld",&ar[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(ar[i]>ar[j])
            {
                long a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
            }
        }
    }
    
    
    for(int i=0;i<4;i++)
    {
        sum1=sum1+ar[i];
    }
    for(int i=1;i<5;i++)
    {
        sum2=sum2+ar[i];
    }
    printf("%ld %ld",sum1,sum2);
    
    return 0;
}
