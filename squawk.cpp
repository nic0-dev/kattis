#include<bits/stdc++.h>
using namespace std;
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define FORD(i,j,k) for(int i=j;i>=k;i--)
#define ll long long
#define ull unsigned long long int
#define endl '\n'
const ll mod = 1000000007; 

int main(){
    ios_base:: sync_with_stdio(0); 
    cin.tie(0);
        
    ll n, m, s, t;
    cin >> n >> m >> s >> t;
    if(n <= 1 || t <= 0 || m == 0) {
        cout << 0 << endl;
    }
    else {
        vector<ll> val(n, 0), valIn(n,0), conn[n];
        while(m--){
            int x, y;
            cin >> x >> y;
            conn[x].push_back(y);
            conn[y].push_back(x);
        }
        val[s]++;

        FOR(x,1,t+1) {
            ll squawk = 0;
            FOR(i, 0, n) {
                FOR(j,0,conn[i].size()) {
                    valIn[conn[i][j]] += val[i];
                    squawk += val[i];
                }
            }

            FOR(i,0,n) {
                val[i] = valIn[i];
                valIn[i] = 0;
            }
            if(x == t) {
                cout << squawk << endl;
            }
        }
    }
    return 0;
}

