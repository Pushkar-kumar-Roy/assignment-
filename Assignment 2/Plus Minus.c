https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true


#include"stdio.h"
int main()
{
    int n;
    float c1=0,c2=0,c3=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        c1=c1+1;
        else if(ar[i]<0)
        c2=c2+1;
        else 
        c3=c3+1;
    }
    float all=c1+c2+c3;
    printf("%f\n",c1/all);
    printf("%f\n",c2/all);
    printf("%f\n",c3/all);
    
    return 0;
}
