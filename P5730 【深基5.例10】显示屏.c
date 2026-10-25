#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char put[5][500]={0};//列与行
    char num[105];
    scanf("%s",num);
    char digit[10][5][4]={
        {"XXX","X.X","X.X","X.X","XXX"}, // 0
        {"..X","..X","..X","..X","..X"}, // 1
        {"XXX","..X","XXX","X..","XXX"}, // 2
        {"XXX","..X","XXX","..X","XXX"}, // 3
        {"X.X","X.X","XXX","..X","..X"}, // 4
        {"XXX","X..","XXX","..X","XXX"}, // 5
        {"XXX","X..","XXX","X.X","XXX"}, // 6
        {"XXX","..X","..X","..X","..X"}, // 7
        {"XXX","X.X","XXX","X.X","XXX"}, // 8
        {"XXX","X.X","XXX","..X","XXX"}  // 9
    };
    int a;
        for(int row=0;row<5;row++){
            int k=0;
            for(int i=0;i<n;i++){
                a=num[i]-'0';
            for(int j=0;j<3;j++){
                put[row][k]=digit[a][row][j];
                k++;
            }
            if(i!=n-1){put[row][k]='.';k++;}
            else put[row][k]='\0';
    }
}
    for(int i=0;i<5;i++){
        int j=0;
        while(put[i][j]!='\0'){
            printf("%c",put[i][j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}