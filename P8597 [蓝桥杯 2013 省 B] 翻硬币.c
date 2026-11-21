#include<stdio.h>
#include<string.h>
int main(){
    char o[1005];
    char t[1005];
    int found=0,site=0,count=0;
    scanf("%s %s",o,t);
    for(int i=0;i<strlen(o);i++){
        if(o[i]!=t[i]&&found){
            count+=i-site;
            found=0;
        }else if(o[i]!=t[i]&&!found){
            found=1;
            site=i;
        }
    }
    printf("%d",count);
    return 0;
}