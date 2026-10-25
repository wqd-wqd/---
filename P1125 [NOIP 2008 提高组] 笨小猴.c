#include<stdio.h>
int isprime(int n){
    if(n==2||n==3)return 1;
    if(n<2)return 0;
    if(n%2==0)return 0;
    for(int i=3;i<n;i+=2){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int n;
    int a[30]={0};
    char ch;
    int maxn,minn;
    while(scanf("%c",&ch)==1){
        a[ch-97]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]==0){continue;}
        else{
            maxn=a[i];
            minn=a[i];
            break;
        }
    }
    for(int i=1;i<26;i++){
        if(a[i]>=maxn)maxn=a[i];
        if(a[i]<=minn&&a[i]!=0)minn=a[i];
    }
    n=maxn-minn;
    if(isprime(n)){
        printf("Lucky Word\n%d",n);
    }else{
        printf("No Answer\n0");
    }
    return 0;
}