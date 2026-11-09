#include<stdio.h>
#include<string.h>
int n[600],m[600],sum[600];
int main(){
    char a[600],b[600];
    scanf("%s %s",a,b);
    int la=strlen(a),lb=strlen(b);
    for(int i=0;i<la;i++)n[i]=a[la-1-i]-'0';
    for(int i=0;i<lb;i++)m[i]=b[lb-1-i]-'0';
    int max;
    if(la>=lb)max=la;
    else max=lb;
    int full=0;
    for(int k=0;k<=max;k++){
        if(k==max)sum[k]=full;
        else sum[k]=n[k]+m[k]+full;
        if(sum[k]>=10){
            full=1;
            sum[k]%=10;
        }
        else full=0;
    }
    for(int k=max;k>=0;k--){
        if(k==max&&sum[k]==0)continue;
        printf("%d",sum[k]);
    }
    printf("\n");
    return 0;
}