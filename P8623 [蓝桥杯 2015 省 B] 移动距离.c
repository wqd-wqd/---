#include<stdio.h>
#include<stdlib.h>
int main(){
    int u,n,m;
    scanf("%d %d %d",&u,&m,&n);
    int a,b,c,d;
    a=m/u;
    c=n/u;
    int x,y;
    x=abs(a-c);
    if(a%2==0)b=m%u-1;
    else b=u-m%u;
    if(c%2==0)d=n%u-1;
    else d=u-n%u;
    y=abs(b-d);
    printf("%d",x+y);
    return 0;
}