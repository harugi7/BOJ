//
// Created by cge on 2023/05/22.
// i have to consider overflow!!
#include <iostream>

using namespace std;

int main(){
    int t, n, m;
    long long ans=1;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n > m-n) n = m-n;
// mCn
        for(int i=m; i>m-n; i--) ans*=i;
        for(int i=1; i<=n; i++) ans/=i;
        cout << ans << endl;
        ans=1;
    }
}