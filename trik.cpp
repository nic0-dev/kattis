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
        
    string s;
    cin >> s;
    int ball = 1;
    FOR(i,0,s.size()){
        if(s[i] == 'A' && (ball == 1 || ball == 2))
            ball = 3 - ball;
        else if(s[i] == 'B' && (ball == 2 || ball == 3))
            ball = 5 - ball;
        else if(s[i] == 'C' && (ball == 1 || ball == 3))
            ball = 4 - ball;
    }
    cout << ball;
    return 0;
}
