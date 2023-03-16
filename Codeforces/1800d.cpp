#include <bits/stdc++.h>
using namespace std;
void solve();

#define mod							1000000007
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

    int cnt=0;
    for(int i=0,j=2;j<s.size();i++,j++){
        if(s[i]!=s[j]) cnt++;
    }

    cout<<cnt+1<<endl;

    return;
}

