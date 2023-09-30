#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();
vector<long long> sieve(long long MAXP);
bool palindrome(string &s);

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
#define exit return 0

#define cinn(a) for(auto& i : a) cin>>i
#define printa(a) for(auto& i : a) cout<<i<<" ";nl

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
    ll modulo = 998244353;
    vector<int> seq;
    ll opr=0,sequence=1;

    for(int i=0;i<s.size();i++){
        int consec=1,j;
        for(j=i;j<s.size()-1;j++){
            if(s[j]==s[j+1]) consec++;
            else {
                i=j+1;
                i--;
                break;
            }
        }
        if(j==s.size()-1) i=s.size();
        seq.push_back(consec);
    }

    for(auto& i:seq) opr+=i-1;
    for(auto& i:seq) {
        sequence = (sequence * i) % modulo;
    }
    ll x=opr;
    while(x>1){
        sequence = (sequence * x) % modulo;
        x--;
    }

    cout<<opr<<" "<<sequence; nl;
    
    return;
}

bool palindrome(string &s){
    int len = s.size()/2;
    for(int i=0,j=s.size()-1;i<len;i++,j--){
        if(s[i]!=s[j])
            return false;
    }
    return true;
}

vector<long long> sieve(long long MAXP){
    vector<ll> res;
    vector<bool> mem(MAXP,1);
    mem[1]=0;
    //get all prime numbers upto MAXP
    for(int i=2;i<MAXP;i++){
        if(mem[i]==1){
            res.push_back(i);
            for(int j=i;j<MAXP;j+=i) {mem[j]=0;}
        }
    }
    return res;
}




