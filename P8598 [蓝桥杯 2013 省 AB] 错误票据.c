#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int count[10001]={0};
    scanf("%d",&a);
    int min=a,max=a;
    count[a]++;
    while(scanf("%d",&a)==1){
        if(a<min)min=a;
        if(a>max)max=a;
        count[a]++;
    }
    int x,y;
    for(int i=min;i<=max;i++){
        if(count[i]==2)x=i;
        if(count[i]==0)y=i;
    }
    printf("%d %d",y,x);
    return 0;
}