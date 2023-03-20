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
    cin>>s;
    int zeros=0,ones=0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') zeros++;
        else ones++;
    }
    if(zeros != ones) cout<<min(zeros,ones)<<"\n";
    else cout<<labs(min(zeros, ones) -1 )<<"\n";

    return;
}
