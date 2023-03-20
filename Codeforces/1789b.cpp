#include <bits/stdc++.h>
using namespace std;
void solve();

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                             freopen("output.txt", "w", stdout);


int main()
{
    fastIO
    #ifndef ONLINE_JUDGE
        fileIO
    #endif
    
    int t;
    
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    
    return 0;
}

void solve(){
    int n; cin>>n;
    string s;
    cin>>s;

    int Same=0,notSame=0;
    for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
        if(s[i]==s[j]){
            if(notSame) Same=1;
        }
        else {
            notSame=1;
            if(Same==1) {
                cout<<"No\n"; return;
            }
        }
    }
    cout<<"Yes\n"; return;

    return;
}
