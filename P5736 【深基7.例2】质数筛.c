#include<stdio.h>
int isprime(int n){
    if(n<2)return 0;
    if(n==2||n==3)return 1;
    if(n%2==0)return 0;
    for(int i=3;i*i<=n;i+=2)if(n%i==0)return 0;
    return 1;
}

int main(){
    int m,n;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        if(isprime(n))printf("%d ",n);
    }
    return 0;
}