#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;

bool f(int i, int n, int k, vector<int>& v, int sum, vector<vector<int>>& dp) {
    if(sum == k) return true;
    if(sum > k || i >= n) return false;

    if(dp[i][sum] == 1) return true;
    if(dp[i][sum] == 0) return false;


    bool notTake = f(i + 1, n, k, v, sum, dp);
    bool take = f(i + 1, n, k, v, sum + v[i], dp);

    return dp[i][sum]= take || notTake;
}

bool subsetSumToK(int n, int k, vector<int> &v) {

    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    

    bool x = f(0, n, k, v, 0, dp);

    return x;
}

void soln() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    if( subsetSumToK(n, k, v) ) cout << "true" << endl;
    else cout << "false" << endl;
}

int main() {
    ll t;
    cin >> t; while(t--) 
    soln();
    return 0;
}