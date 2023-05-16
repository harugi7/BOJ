//
// Created by cge on 2023/05/16.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[11] = { 0, };

    dp[1] = 0;
    dp[2] = 1;


    for (int i = 3; i <= n; i++) {
        int div = i / 2;
        dp[i] = (div * (i - div)) + dp[div] + dp[i - div];
    }

    cout << dp[n];
}
