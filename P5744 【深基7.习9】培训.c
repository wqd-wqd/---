#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[100];
    int age;
    double point,point2;
    for(int i=0;i<n;i++){
        scanf("%s %d %lf",name,&age,&point);
        if(point*1.2>600)point2=600;
        else point2=point*1.2;
        printf("%s %d %.0f\n",name,age+1,point2);
    }
    return 0;
}