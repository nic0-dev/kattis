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
        
    ll ans = 0, n, m;
    cin >> n >> m;
    string s[n];
    FOR(i,0,n)
        cin >> s[i];
    FOR(i,0,m){
        bool blank = true;
        FOR(j,0,n){
            blank = blank && s[j][i] == '_';
            if(blank == 0)
                continue;
        }
        if(blank) {
            ans++;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}
