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
    string s; cin>>s;
    int left=0,right=0;
    int ara[150];
    setzero(ara);
    for(int i=0;i<s.size()/2;i++){
        char ch = s[i];
        int chi = ch;
        ara[chi]++;
    }
    int i;
    if(s.size()%2==0) i = s.size()/2;
    else i = (s.size()/2)+1;
    for(;i<s.size();i++){
        char ch = s[i];
        int chi = ch;
        ara[chi]++;
    }
    int flag=0;
    for(int i=0;i<130;i++){
        //cout<<i<<" "<<ara[i]<<" \n";
        if(ara[i] % 2 != 0){
            cout<<"No\n"; return;
        } 
        if(ara[i]!=0) flag++;
    }
    if(flag>1)
        cout<<"Yes\n";
    else 
        cout<<"No\n";

    return;
}

