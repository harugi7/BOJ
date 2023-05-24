// 14' 13''
// Created by cge on 2023/05/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m, c1, c2;
    cin >> n >> m;
    vector<int> bundle(m);
    vector<int> one(m);
    for(int i=0; i<m; i++){
        cin >> bundle[i] >> one[i];
    }
    int min_one = *min_element(one.begin(), one.end());
    bundle.push_back(min_one*6);
    int min_b = *min_element(bundle.begin(), bundle.end());
    c1 = (n/6)*min_b + (n%6)*min_one;
    c2 = (n/6)*min_b + min_b;
    if(c1 < c2) cout << c1;
    else cout << c2;


}