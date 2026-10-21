#include<stdio.h>
int site[45][45];
int main(){
    int n;
    scanf("%d",&n);
    int y=(n+1)/2;
    int x=1;//x表示行，y表示列
    site[x][y]=1;
    for(int k=2;k<=n*n;k++){
        if(x==1&&y!=n){
            x=n;
            y=y+1;
        }else if(x!=1&&y==n){
            y=1;
            x=x-1;
        }else if(x==1&&y==n){
            x+=1;
        }else if(x!=1&&y!=n){
            if(site[x-1][y+1]==0){
                x-=1;
                y+=1;
            }else{
                x+=1;
            }
        }
        site[x][y]=k;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",site[i][j]);
        }
        putchar('\n');
    }
    return 0;
}