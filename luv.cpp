#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;

vector<pair<int, int> > g[N];
vector<int> level(N, 1e9);

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if(a == b) continue; // avoid self loop if any
        g[a].push_back({b, 0}); // given edge weight = 0
        g[b].push_back({a, 1}); // opposite edge weight = 1 (penalty)
    }

    deque<int> q; // cause we need to push front and back

    q.push_back(1);
    level[1] = 0;

    while(q.size()) {
        pair<int, int> p = q.front();
        q.pop_front();

        int v = p.first, v_wt = p.second;

        for(auto child : g[v]) {
            int ch = child.first, wt = child.second;
            if(level[ch] <= level[v] + wt) continue; // if new level is smaller then only take it
            level[ch] = level[v] + wt;
            if(wt == 1) q.push_back(ch); // push child back if weight = wt of v + 1
            else q.push_front(ch); // push child front if weight = wt of v
        }
    }
    if(level[n] == 1e9) cout << -1 << endl; // if n not reachable
    else cout << level[n] << endl;
    return 0;
}