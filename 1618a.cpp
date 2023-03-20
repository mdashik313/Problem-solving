#include <bits/stdc++.h>
using namespace std;

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
    long long n;
    
    scanf("%d", &t);
    while(t--) {
        ll ara[7];
        for(int i=0;i<7;i++) cin>>ara[i];
        ll ans[3]; ans[0]=ara[0];
        ll m = ara[6]-ara[0];

        for(int i=1; i<6; i++){
            for(int j=i+1; j<6; j++){
                if(ara[i]+ara[j]==m) {
                    ans[1]=ara[i]; ans[2]=ara[j];
                    i=6;
                    break;
                }
            }
        }
        
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<"\n";
    }
    
    return 0;
}
