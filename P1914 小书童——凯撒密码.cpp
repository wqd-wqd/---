#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int i=0;
    do{
        int x=s[i]+n%26;
        if(x>122)x-=26;
        cout<<char(x);
        i++;
    }while(i<(int)s.size());
    return 0;
}