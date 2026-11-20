#include<stdio.h>
int a(int n,int k){
    return n+n/k;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int sum=n;
    while(n>=k){
        sum+=n/k;
        n=n/k+n%k;
    }
    printf("%d",sum);
    return 0;
}