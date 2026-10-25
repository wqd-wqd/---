#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char a;
    while(scanf(" %c",&a)==1){
        int b=a+n%26;
        if(b>122)b-=26;
        printf("%c",b);
    }
    return 0;
}