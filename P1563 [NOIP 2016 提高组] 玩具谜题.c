#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);//n个人，m条指令
    int people[n];
    char car[n][11];
    for(int i=0;i<n;i++)scanf("%d %s",&people[i],car[i]);
    int a,s;//a0为左，a1为右    //0为朝内，1为朝外
    char (*p)[11]=car;
    int now=0;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&s);
        if(a==people[now]){
            now=(now-s+n)%n;
        }else now=(now+s)%n;
        p=car+now;
    }
    printf("%s",*p);
    return 0;
}