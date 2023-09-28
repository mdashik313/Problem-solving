#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();
vector<long long> sieve(long long MAXP);

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                freopen("output.txt", "w", stdout);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define exit return

#define cinn(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define printa(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" ";nl
#define lop(size) for(int i=0;i<size;i++)


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

    bool type1=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) type1=1;
    }

    if(type1){
        yes;
        char cur=')';
        for(int i=0;i<s.size();i++){
            if(cur==')') {
                cout<<"(";
                cur='(';
            }
            else {
                cout<<")";
                cur=')';
            }
        }
        for(int i=0;i<s.size();i++){
            if(cur==')') {
                cout<<"(";
                cur='(';
            }
            else {
                cout<<")";
                cur=')';
            }
        }
    }
    else {
        if(s=="()"){
            no;
            exit;
        }
        yes;
        for(int i=0;i<s.size();i++){
            cout<<"(";
        }
        for(int i=0;i<s.size();i++){
            cout<<")";
        }
        
    }
    nl;
    
    return;
}

vector<long long> sieve(long long MAXP){
    vector<ll> res;
    vector<bool> mem(MAXP,1);
    mem[1]=0;
    for(int i=2;i<MAXP;i++){
        if(mem[i]==1){
            res.push_back(i);
            for(int j=i;j<MAXP;j+=i) {mem[j]=0;}
        }
    }
    return res;
}


