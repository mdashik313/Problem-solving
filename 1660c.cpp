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
    string s;
    
    cin>>s;

    int count=0;
    bool isOdd = true;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(isOdd){
            if(i+1 < s.size()){
                if(ch == s[i+1]){
                    isOdd = false;
                    continue;
                }
                else {
                    count++;
                } 
            }
            else count++;
              
        }
        else {
            if(ch == s[i+1]){
                isOdd = true;
            }
        }
        
    }
    // if(isOdd) count++;
    cout<<count<<"\n";

    return;
}
