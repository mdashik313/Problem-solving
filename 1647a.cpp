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
    int n; cin>>n;
    if(n > 2){
        int r = n % 3;
        int x = n/3;

        if(r == 0){
            
            for(int i=0; i<x; i++) cout<<"21";
            cout<<"\n";
        }
        else if(r == 1){
            cout<<"1";
            for(int i=0; i<x; i++) cout<<"21";
            cout<<"\n";
        }
        else{
            for(int i=0; i<x; i++) cout<<"21";
            cout<<"2\n";
        }
    }
    else if(n == 2) cout<<"2\n";
    else cout<<"1\n";

    return;
}
