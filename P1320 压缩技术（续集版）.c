#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char size='0';
    char m[40050]={0};
    char ch='0';
    int i=0;
    while(scanf(" %c",&ch)==1){
        m[i]=ch;
        i++;
    }
    int N=sqrt(i);
    printf("%d ",N);
    int j=0,count=0;
    while(m[j]!='\0'){
        if(m[j]==size){
            count++;
            j++;
        }else{
            if(size=='0')size='1';
            else size='0';
            printf("%d ",count);
            count=0;
        }
    }
    printf("%d ",count);
    return 0;
}
/*#include <stdio.h>

int main() {
    char ch;
    char s[40050];
    int len = 0;

    // 读取所有非空白字符（自动跳过空格和换行）
    while (scanf(" %c", &ch) == 1) {
        if (ch == '0' || ch == '1') {
            s[len++] = ch;
        }
    }

    // 由总字符数推算 N（N² = len）
    int n = 1;
    while (n * n < len) n++;

    printf("%d ", n);

    // 游程统计，初始期望字符为 '0'
    char cur = '0';
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == cur) {
            cnt++;
        } else {
            printf("%d ", cnt);
            cnt = 1;
            cur = s[i];
        }
    }
    printf("%d\n", cnt);  // 别忘了最后一个游程

    return 0;
}*/