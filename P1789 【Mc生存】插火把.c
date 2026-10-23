#include<stdio.h>
int main(){
    int n,m,k;
    int a[105][105]={0};
    scanf("%d %d %d",&n,&m,&k);
    int x,y;
    int o,p;
    int count=0;
    for(int i=0;i<m;i++){
        scanf("%d %d",&o,&p);
        x=o-1,y=p-1;
        for(int j=x-2;j<=x+2;j++){
                if(j==x-1||j==x+1){
                    for(int b=y-1;b<=y+1;b++){
                    if(j<0||j>n-1||b<0||b>n-1)continue;
                    a[j][b]=1;
                    }
                }else if(j==x){
                    for(int b=y-2;b<=y+2;b++){
                    if(j<0||j>n-1||b<0||b>n-1)continue;
                    a[j][b]=1;
                    }
                }else{
                    int b=y;
                    if(j<0||j>n-1||b<0||b>n-1)continue;
                    a[j][b]=1;
                }
        }
    }
    for(int i=0;i<k;i++){
        scanf("%d %d",&o,&p);
        x=o-1,y=p-1;
        for(int j=x-2;j>=0&&j<=x+2&&j<n;j++){
            for(int c=y-2;c>=0&&c<=y+2&&c<n;c++){
                if(j<0||j>n-1||c<0||c>n-1)continue;
                a[j][c]=1;
            }
        }
    }
    for(int j=0;j<n;j++){
        for(int d=0;d<n;d++){
            if(a[j][d]==0)count++;
        }
    }
    printf("%d",count);
    return 0;
}