#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[11];
    int c;
    int m;
    int e;
}Point;

int main(){
    int n,max;
    scanf("%d",&n);
    int sum[n];
    Point *point=malloc(n*sizeof(Point));
    Point *a=0;
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",point[i].name,&point[i].c,&point[i].m,&point[i].e);
        sum[i]=point[i].c+point[i].m+point[i].e;
        if(i==0){max=sum[0];a=&point[0];}
        if(sum[i]>max){
            max=sum[i];
            a=&point[i];
        }
    }
    printf("%s %d %d %d",a->name,a[0].c,a[0].m,a[0].e);
    free(point);
    return 0;
}