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
    int n;
    cin>>n; int m=n;
    vector<int>v;
    vector<int>v2;
    while(n--){
        int x; cin>>x; v.pb(x);
    }
    bool flag = false;
    if(m==1) {cout<<v[0]<<"\n"; return;}
    v2 = v;
    sort(v2.begin(), v2.end());
    
    for(int i=0; i<v.size(); i++){
        if(v[i] != v2[i] && flag == false){
            int l=i,r=i+1, s=i;
            flag = true;
            for(i++; i<v.size(); i++){
                if(v[i]==v2[s]){
                    s = i;
                    for(; s >= l; s--){
                        cout<<v[s]<<" ";
                    }
                    break;
                }
            }
        }
        else cout<<v[i]<<" ";
    }
    cout<<"\n";
    
    return;
}
