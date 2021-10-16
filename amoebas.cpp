#include<bits/stdc++.h>
using namespace std;
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define FORD(i,j,k) for(int i=j;i>=k;i--)
#define ll long long
#define ull unsigned long long int
#define endl '\n'
const ll mod = 1000000007; 

int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool visited[100][100];

int search(string s[], int n, int m, int i, int j) {
    if(visited[i][j])
        return 0;
    visited[i][j] = true;
    FOR(dir, 0, 8) {
        int k;
        int row = i + x[dir];
        int col = j + y[dir];
        if(row >= 0 && row < n && col >= 0 && col < m){
            if(!visited[row][col] && s[row][col] == '#'){
                search(s,n,m,row,col);
                visited[row][col] = true;
            }
        }
    }
    return 1;
}

int solve(string s[], int n, int m) {
    int total = 0;
    FOR(i,0,n) {
        FOR(j,0,m) {
            if(!visited[i][j] && s[i][j] == '#'){
                total += search(s, n, m, i, j);
            }
        }
    }
    return total;
}

int main(){
    ios_base:: sync_with_stdio(0); 
    cin.tie(0);
        
    int n, m;
    cin >> n >> m;
    string s[n];
    FOR(i,0,n)
        cin >> s[i];
    cout << solve(s, n, m) << endl;
    return 0;
}
