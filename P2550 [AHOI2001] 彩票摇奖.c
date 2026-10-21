#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int award[7];
    int m[8]={0};
    for(int i=0;i<7;i++){
        scanf("%d",&award[i]);
    }
    int buy[1005][7];
    for(int i=0;i<n;i++){
        int get=0;
        for(int j=0;j<7;j++){
            scanf("%d",&buy[i][j]);
        }
        for(int a=0;a<7;a++){
            for(int b=0;b<7;b++){
                if(buy[i][a]==award[b]){get++;break;}
            }
        }
        switch(get){
            case 1:m[1]+=1;break;
            case 2:m[2]+=1;break;
            case 3:m[3]+=1;break;
            case 4:m[4]+=1;break;
            case 5:m[5]+=1;break;
            case 6:m[6]+=1;break;
            case 7:m[7]+=1;break;
        }
    }
    printf("%d %d %d %d %d %d %d",m[7],m[6],m[5],m[4],m[3],m[2],m[1]);
    return 0;
}