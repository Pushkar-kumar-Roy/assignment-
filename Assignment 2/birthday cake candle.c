https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true


#include"stdio.h"
int main()
{
    int n,a=0,count=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
      if(ar[i]>a)
      a=ar[i];  
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==a)
        count++;
    }
    printf("%d",count);
    
    return 0;
}
