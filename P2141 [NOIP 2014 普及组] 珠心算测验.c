#include<stdio.h>
int main(){
    int n;
    int a[105]={0};
    int b[20005]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            b[a[i]+a[j]]=1;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(b[a[i]])count++;
    }
    printf("%d",count);
    return 0;
}