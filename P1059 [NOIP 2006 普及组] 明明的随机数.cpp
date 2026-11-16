#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int>ans;
    for(int i=0;i<(int)v.size();i++){
        if(i==0||v[i]!=v[i-1]){
            ans.push_back(v[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<(int)ans.size();i++){
        int x=ans[i];
        cout<<x<<" ";
    }
    return 0;
}