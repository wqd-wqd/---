#include<stdio.h>
int main(){
    int a[30][30]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){//表示第几行
        for(int j=0;j<=i;j++){//表示第几位数
            if(j==0||j==i)a[i][j]=1;
            else a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}