#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=0;
    int site[15][15]={0};
    int i=1,j=1;
    int m=1;
    for(int k=n;;k--){
    for(;j<=k;j++){
        x++;
        site[i][j]=x;
        if(x==n*n) goto done;
    }
    j-=1;
    for(i+=1;i<=k;i++){
        x++;
        site[i][j]=x;
        if(x==n*n) goto done;
    }
    i-=1;
    for(j-=1;j>=m;j--){
        x++;
        site[i][j]=x;
        if(x==n*n) goto done;
    }
    j+=1;
    m+=1;
    for(i-=1;i>=m;i--){
        x++;
        site[i][j]=x;
        if(x==n*n) goto done;
    }
    i+=1;
    j+=1;
}
done:
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%3d",site[i][j]);
    }
    printf("\n");
}
return 0;
}