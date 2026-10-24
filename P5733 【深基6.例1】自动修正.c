#include<stdio.h>
int main(){
    char s[105];
    scanf("%s",s);
    int i=0,j=0;
    while(s[i]!='\0'){
        if(s[i]>=97&&s[i]<=122)s[i]-=32;
        i++;
        printf("%c",s[i-1]);
    }
    return 0;
}