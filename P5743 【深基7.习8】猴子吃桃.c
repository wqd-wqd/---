#include<stdio.h>
int num(int m){
    int n=1;
    for(int i=0;i<m-1;i++){
        n=(n+1)*2;
    }
    return n;
}
int main(){
    int m;
    scanf("%d",&m);
    printf("%d",num(m));
    return 0;
}