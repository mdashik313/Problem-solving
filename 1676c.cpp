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
    int n,m,res=1000000000; cin>>n>>m;
    vector<string>v;
    for(int i=0; i<n; i++){
        string s; cin>>s; v.pb(s);
    }
    int minn = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            string a,b;
            a = v[i]; b = v[j];
            int sum=0;
            for(int i=0; i<m; i++){
                sum += abs((int)a[i] - (int)b[i]);
            }
            res = min(res,sum);
        }
    }
    cout<<res<<endl;

    return;
}
