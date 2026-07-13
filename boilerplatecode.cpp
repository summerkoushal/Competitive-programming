// this competitve boilerplate code belong to @summer_2
#include <bits/stdc++.h>
typedef long long ll;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define gsort(n) sort(all(n), greater<ll>())
#define TC ll t; cin >> t; while (t--)
#define yup cout << "YES" << endl
#define nope cout << "NO" << endl
#define all(v) v.begin(), v.end()
#define Sort(n) sort(all(n))
#define pll pair<ll, ll>
#define vpll vector<pll>
#define mll map<ll, ll>
#define vll vector<ll>
#define pb push_back
using namespace std;
#define ss second
#define endl "\n"
#define ff first
#define sp " "
const ll MOD = 1e9+7;
// ll fact[200007]; 

// void factorial() { fact[0] = 1 ; for(ll i = 1; i < 200007; i++) fact[i] = (fact[i-1] * i) % mod; }
ll binexpMod(ll a, ll b) { ll x = 1; while (b > 0) { if (b & 1) x = (x * a) % MOD; a = (a * a) % MOD; b >>= 1; } return x; }
ll binexp(ll a, ll b) { ll x = 1; while (b > 0) { if (b & 1) x = (x * a); a = (a * a); b >>= 1; } return x; }
ll binarySearch(ll v[], ll n, ll t) { ll s = 0, e = n-1, m; while(s<=e) { m = s + (e - s)/2; if(v[m]==t) return m; else if(v[m]>t) e = m - 1; else s = m + 1; } return -1; }
ll inverseMod(ll a, ll m) { a = a % m; for (ll x = 1; x < m; x++) if ((a * x) % m == 1) return x; return -1; }
ll addmod(ll x, ll y) { return ((x % MOD) + (y % MOD)) % MOD; }
ll dividemod(ll x, ll y) { return ((x % MOD) * binexpMod(y % MOD, MOD - 2)) % MOD; }
ll multiplymod(ll x, ll y) { return ((x % MOD) * (y % MOD)) % MOD; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a%b); }
ll lcm(ll a, ll b) { return a*b/gcd(a, b); }
bool isprime(ll n) { if(n<=1) return false; for (ll i = 2; i <= sqrt(n); i++) if (n % i == 0) return false; return true; }
void printPrimeupto(ll n) { ll chk=0; for(ll i=1; i<=n; i++) { for(ll j=2; j<i; j++) { if(i%j==0) { chk++; break; } } if(chk==0 && i!=1) cout<<i<<sp; chk = 0; } cout<<endl; }
vll primepushVectorupton(ll n) { vll v; ll chk=0; for(ll i=1; i<=n; i++) { for(ll j=2; j<i; j++) { if(i%j==0) { chk++; break; } } if(chk==0 && i!=1) v.push_back(i); chk = 0; } return v; }
vll primefactorsVectorPush(ll n){vll v;while(n%2==0){v.pb(2);n=n/2;}for(ll i=3;i<=sqrt(n);i=i+2){while(n%i==0){v.pb(i);n=n/i;}}if(n>2){v.pb(n);}return v;}
// -----
#define debug(x) cerr << (#x) << ":\t" << (x) << endl
// -----
void printv(vll v) { cout << "v->[ "; for(ll i = 0; i < v.size(); i++) cout << v[i] << sp; cout << "]" << endl; }
void printvp(vpll vp) { cout << "{-vp-" << endl; for(auto i : vp) cout << i.ff << sp << i.ss << endl; cout << "-vp-}" << endl; }
void printm(map<char, ll> m) { cout << "{---" << endl; for(auto i : m) cout << i.ff << sp << i.ss << endl; cout << "---}" << endl; }

// ==================================CODE-FUCT-STRT=================================



// ==================================CODE-FUCT-ENDS=================================

void soln() {
    
}

// ==================================MAIN-CODE-ENDS=================================

int main() {
    FIO;
    TC soln();
    return 0;
}