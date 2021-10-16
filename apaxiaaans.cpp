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
    
    string s, ans = "";
    cin >> s;
    queue<char> q;
    q.push(s[0]);
    ans += s[0];
    FOR(i,1,s.size()){
        if(s[i] != q.front()){
            q.pop();
            q.push(s[i]);
            ans += s[i];
        }
    }
    cout << ans;
    return 0;
}
