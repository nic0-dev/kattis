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
        
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    long double sp = (a+b+c+d)/2;
    cout << setprecision(15) << fixed << sqrt((sp - a) * (sp - b) * (sp - c) * (sp - d));
    return 0;
}
