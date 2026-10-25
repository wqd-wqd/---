#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t;
    double a;
    int m=0;
    for(int i=0;i<n;i++){
        scanf("%lf %d",&a,&t);
        for(int j=1;j<=t;j++){
            int d=(int)(a*j);
            m^=d;
        }
    }
    printf("%d",m);
    return 0;
}