#include<stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    int s[100]={0};
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                s[i+j+k]++;
            }
        }
    }
    int max=s[3];
    int x=3;
    for(int i=4;i<=s1+s2+s3;i++){
        if(s[i]>max){
            x=i;
            max=s[i];
        }
    }
    printf("%d",x);
    return 0;
}