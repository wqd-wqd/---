#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[15]={0};
    for(int i=m;i<=n;i++){
        int x=i;
        while(x>0){
            int d=x%10;
            x/=10;
            a[d]++;
        }
    }
    for(int i=0;i<=9;i++){
        printf("%d ",a[i]);}
    return 0;
}