#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    int size=0;
    int count=0,row=1;
    while(row!=n+1){
        scanf("%d",&a);
        for(int j=0;j<a;j++){
            printf("%d",size);
            count++;
            if(count==n){printf("\n");count=0;row++;}
        }
        if(size){size=0;}
        else size=1;
    }
    return 0;
}