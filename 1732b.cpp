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
    string s; cin>>s;

    int ans=0,one=0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='0'){
            int idx=i,isZero=0,isOne=0;
            while(idx < s.size() && s[idx]=='0'){
                idx--;
                isZero=1;
            }
            while(idx < s.size() && s[idx]=='1'){
                idx--;
                isOne=1;
            }
            if(isOne){
                if(one) {
                    ans+=2;
                }
                else {
                    ans++;
                    one = 1;
                }
                i = idx + 1;
            }
            else break;
        }
        else one = 1;
    }
    cout<<ans<<endl;

    return;
}
