#include<stdio.h>
int main(){
    int app[27]={0};
    char ch;
    while(scanf("%c",&ch)==1){
        if(ch>=65&&ch<=90)app[ch-'A']++;
        else continue;
    }
    int max=app[0];
    for(int i=1;i<26;i++)if(app[i]>max)max=app[i];
    for(int i=max;i>0;i--){
        int found=0;
        for(int j=0;j<26;j++)if(app[j]>=i)found=j*2;
        for(int j=0;j<52;j++){
            if(app[j/2]>=i&&j%2==0)printf("*");
            else if(j<=found)printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<26;i++)printf("%c ",'A'+i);
    return 0;
}