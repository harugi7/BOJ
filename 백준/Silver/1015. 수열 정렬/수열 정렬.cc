// 39' 45''
// Created by cge on 2023/05/22.
// read prob...
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

static bool comp(pair<int, int>& a, pair<int, int>& b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

int main(){
    int n, t;
    cin >> n;
    map<int, int> m;
    vector<int> ans(n);
    for(int i=0; i<n; i++) {
        cin >> t;
        m.insert({i, t});
    }
    // sort
    vector<pair<int,  int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);

    t=0;
    for(auto w: v){
        ans[w.first] = t;
        t++;
    }
    for(auto w: ans) cout << w << " ";
}