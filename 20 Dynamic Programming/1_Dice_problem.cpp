


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void ways(int n, vector<int>&dp){
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j<=i) {
                dp[i] = dp[i] + dp[i - j];
            }
        }
    }
}
int main() {
    int n;
    cout << "Enter number :";
    cin >> n;
    if(n<=0) return 0;
    if(n==1) {
        cout << "Number of ways to reach 1 is: 1" << endl;
        return 0;
    }
    vector<int> dp(n + 1, -1);
    ways(n,dp);
    return dp[n];
    return 0;
}