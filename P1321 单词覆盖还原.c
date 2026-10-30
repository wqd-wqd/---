#include<stdio.h>
#include<string.h>
int main(){
    char a[300];
    scanf("%s",a);
    int n=strlen(a);
    int boy=0,girl=0;
    for(int i=0;i<n-2;i++){
        if(a[i]=='b'||a[i+1]=='o'||a[i+2]=='y')boy++;
        if(a[i]=='g'||a[i+1]=='i'||a[i+2]=='r'||a[i+3]=='l')girl++;
    }
    printf("%d\n%d",boy,girl);
    return 0;
}