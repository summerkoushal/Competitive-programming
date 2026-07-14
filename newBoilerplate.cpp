#include <bits/stdc++.h>
#define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
#define debug(x) cerr << (#x) << ":\t" << (x) << endl
const ll MOD = 1e9+7;
using namespace std;

ll binexpMod(ll a, ll b) { ll x = 1; while (b > 0) { if (b & 1) x = (x * a) % MOD; a = (a * a) % MOD; b >>= 1; } return x; }
ll binexp(ll a, ll b) { ll x = 1; while (b > 0) { if (b & 1) x = (x * a); a = (a * a); b >>= 1; } return x; }
ll inverseMod(ll a, ll m) { a = a % m; for (ll x = 1; x < m; x++) if ((a * x) % m == 1) return x; return -1; }
ll dividemod(ll x, ll y) { return ((x % MOD) * binexpMod(y % MOD, MOD - 2)) % MOD; }
ll multiplymod(ll x, ll y) { return ((x % MOD) * (y % MOD)) % MOD; }

void soln() {
    // get some fast debugger
}

int main() {
    ll t;
    // cin >> t; while(t--) 
    soln();
    return 0;
}