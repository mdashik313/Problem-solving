#include <bits/stdc++.h>
using namespace std;
void solve();

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)


int main()
{
    ios_base::sync_with_stdio(true); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    
    return 0;
}

void solve(){
    string s;
    char c;
    cin>>s;
    cin>>c;
    int j;

    for(int i=0; i<s.size(); i++){
        j = i+1;
        if(j%2 == 1){
            if(s[i] == c) { cout<<"Yes\n"; return;}
        }
        
    }
    cout<<"No\n";

    return;
}
