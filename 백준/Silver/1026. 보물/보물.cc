// 5' 39''
// Created by cge on 2023/05/23.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, ans=0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for(int i=0; i<n; i++) ans+=(a[i]*b[i]);
    cout << ans;
}
