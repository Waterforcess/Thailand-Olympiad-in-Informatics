#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N6 = 1e6+5;
const int N5 = 2e5+5;
typedef struct edge {
    ll a,b,w;
    bool operator<(const edge& a) const {
        return w>a.w;
    }
} edge;
ll n,m,sum,h[N5];
edge x[N6];

int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) h[i]=i;
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        x[i]={a,b,w};
    }
    sort(x,x+m);
    for(int i=0;i<m;i++) {
        auto [a,b,w] = x[i];
        if(dsu(a)==dsu(b)) continue ;
        h[dsu(a)]=dsu(b);
        sum+=w-1;
    }
    cout << sum;
}