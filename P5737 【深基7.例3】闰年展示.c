#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int count=0;
    int a[500]={0};
    while(x%4!=0)x++;
    for(int i=x;i<=y;i+=4){
        if(i%100==0){
            if(i%400==0){
                a[count++]=i;
            }
        }else{a[count++]=i;}
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)printf("%d ",a[i]);
    return 0;
}