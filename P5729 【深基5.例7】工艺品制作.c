#include<stdio.h>
int cut[25][25][25];
int main(){
    int w,x,h,n;
    scanf("%d %d %d %d",&w,&x,&h,&n);
    while(n--){
        int x1,x2,y1,y2,z1,z2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
        for(int i=x1;i<=x2;i++)
            for (int j = y1; j <= y2; j++)
                for (int k = z1; k <= z2; k++)
                cut[i][j][k]=1;
    }
    int ans = 0;
    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= h; k++)
                if (cut[i][j][k] == 0) ans++;
    printf("%d",ans);
    return 0;
}