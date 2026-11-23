#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    int x,y;
    for(int i=0;i<m;i++){
        int sum=0;
        scanf("%d %d",&x,&y);
        for(int j=x-1;j<=y-1;j++){
            sum+=a[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}