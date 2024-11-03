#include<bits/stdc++.h>
using namespace std;
int n,m,k;
vector<tuple<int,int,int> > v; 

int main() {
    cin >> n >> k >> m;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,i,1});
        v.push_back({a,i,-1});
    }
}