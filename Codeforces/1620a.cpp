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
        string s;
        cin>>s;
        int N=0,E=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='E'){
                E++;
            }
            else {
                N++;
            }
        }
        
            if(s[s.size()-1] == 'N'){
                if(N == 1) cout<<"NO\n";
                else cout<<"YES\n";
            }
            else {
                if(N==1) cout<<"NO\n";
                else cout<<"YES\n";
            }
        
    }
    
    return 0;
}
