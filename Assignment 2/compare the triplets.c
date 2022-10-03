https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true


#include "stdio.h"
int main(){
    int a[3];
    int b[3];
    int al=0,bo=0;
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        al++;
        if(a[i]<b[i])
        bo++;
    }
    int ar[2];
    ar[0]=al;
    ar[1]=bo;
    for(int i=0;i<2;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
