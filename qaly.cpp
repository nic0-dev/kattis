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
        
    double ans = 0;
    int N;
    cin >> N;
    while(N--){
        double q, y;
        cin >> q >> y;
        ans += (q*y);
    }
    cout << setprecision(3) << fixed << ans;
    return 0;
}
