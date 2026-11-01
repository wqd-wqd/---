#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int max,min,sc;
    int sum;
    double a[105];
    for(int i=0;i<n;i++){
        max=0,min=0,sum=0;
        for(int j=0;j<m;j++){
            scanf("%d",&sc);
            if(j==0){min=sc;max=sc;}
            if(sc>=max)max=sc;
            if(sc<=min)min=sc;
            sum+=sc;
        }
        a[i]=(double)(sum-min-max)/(m-2.0);
    }
    double high=a[0];
    for(int i=1;i<n;i++){if(a[i]>high)high=a[i];}
    printf("%.2f",high);
    return 0;
}