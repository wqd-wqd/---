#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int (*grade)[3]=malloc(n*sizeof(*grade));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf(" %d",&grade[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int m=0;m<n;m++){
            int yes=0;
            for(int j=0;j<3;j++){
                if(abs(grade[i][j]-grade[m][j])>5){yes=1;break;}
                }
            if(yes==0&&abs((grade[i][0]+grade[i][1]+grade[i][2])-(grade[m][0]+grade[m][1]+grade[m][2]))<=10)count++;
        }
    }
    printf("%d",(count-n)/2);
    free(grade);
    return 0;
}