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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"


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
    int n,k; cin>>n>>k;
    string s,t; cin>>s>>t;

    map<char,int> mpS,mpT;
    for(int i=0;i<s.size();i++) mpS[s[i]]++;
    for(int i=0;i<t.size();i++) {
        if(mpS[t[i]==0]) {
            no;
            return;
        }
        mpS[t[i]]--;
    }
    
    for(auto it : mpS){
        if(it.second != 0){
            no;
            return;
        }
    }

    if(s.size()<=k){
        if(s==t) yes;
        else no;
    }
    else if(s.size()>=k*2){
        yes;
    }
    else {
        int x = s.size() - k;
        for(int i=x;i<=s.size()-x-1;i++){
            if(s[i]!=t[i]){
                no;
                return;
            }
        }
        yes;
    }
    
    return;
}

