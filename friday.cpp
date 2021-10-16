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
        
    int t;
    cin >> t;
    while(t--){
        int M, D, cnt = 0;
        cin >> D >> M;
        int d[M], lastday = 0;
        FOR(i,0,M){
            cin >> d[i];
            if(d[i] > 12 && (lastday + 12) % 7 == 5)
                cnt++;
            lastday = (lastday + d[i])%7;
        }
        cout << cnt << endl;
    }
    return 0;
}
