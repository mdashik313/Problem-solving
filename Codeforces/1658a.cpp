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

    int zero=0, one = 0, count=0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '0'){
            one = 0;
            for(int j=i+1; j<s.size(); j++){
                if(s[j] == '1') one++;
                else {
                    if(one < 2) {
                        count += abs(one - 2);
                    }
                    i = j-1; break;

                }
            }
        }
    }
    cout<<count<<endl;

    return;
}
