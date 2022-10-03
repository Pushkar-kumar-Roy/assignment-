https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true


#include "stdio.h"
#include "math.h"

int main() {
    int n,count =0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
       count=count+ar[i]; 
    }
    printf("%d",count);
    return 0;
}
