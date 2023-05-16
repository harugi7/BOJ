//
// Created by cge on 2023/05/16.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long arr[200020];
    int n,q,s=0;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>arr[i];
    while(q--){
        int x, a, b;
        cin>>x;
        if(x==1){
            cin>>a>>b;
            a--;
            arr[(s+a)%n]+=b;
        }
        else if(x==2){
            cin>>a;
            s = (s+n-a)%n;
        }
        else {
            cin>>a;
            s = (s+a)%n;
        }
    }
    for(int i=0;i<n;i++) printf("%d ",arr[(s+i)%n]);
}
