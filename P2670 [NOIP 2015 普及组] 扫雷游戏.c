#include<stdio.h>

int n,m;
char a[105][105];

int site(int x,int y){
    int count=0;
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            if(i==0&&j==0)continue;
            if((x+i)<n&&(y+j)<m&&(x+i)>=0&&(y+j)>=0&&a[x+i][y+j]=='*')count++;
        }
    }
    return count;
}

int main(){
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='*')printf("*");
            else printf("%d",site(i,j));
        }
        printf("\n");
    }
    return 0;
}