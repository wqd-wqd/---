#include<stdio.h>
int main(){
    int n;
    char a[105];
    int use[105]={0};
    scanf("%d %s",&n,a);
    int count=0,e=0;
    for(int i=0;i<n;i++){
        if(a[i]=='V'&&a[i+1]=='K'){
                count++;
                use[i]=1;
                use[i+1]=1;
    }
}
    for(int i=0;i<n;i++){
        if(a[i]=='V'&&a[i+1]=='V'&&use[i+1]==0)e=1;
        if(a[i]=='K'&&a[i+1]=='K'&&use[i]==0)e=1;
    }
    if(e==0)printf("%d",count);
    if(e==1)printf("%d",count+1);
    return 0;
}