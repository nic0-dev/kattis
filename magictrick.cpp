#include<bits/stdc++.h>
using namespace std;
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define FORD(i,j,k) for(int i=j;i>=k;i--)
#define ll long long
#define ull unsigned long long int
#define endl '\n'
const ll mod = 1000000007; 

bool magic(string s){
    map<char, int> freq;
    FOR(i,0,s.size())
        if(freq[s[i]] == 0)
            freq[s[i]]++;
        else
            return false;
    return true;
}

int main(){
    ios_base:: sync_with_stdio(0); 
    cin.tie(0);
        
    string s;
    cin >> s;
    cout << magic(s);
    return 0;
}
