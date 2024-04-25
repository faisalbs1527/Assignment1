#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int factorial(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res=(res*i)%mod;
    }
    return res%mod;
}

int takeInput(){
    int n;
    cin>>n;
    return n;
}

void solve(){
    int n=takeInput();
    int res=factorial(n);
    cout<<res<<endl;
}
int main(){
    // cout<<"Hello world"<<endl;
    solve();
    return 0;
}