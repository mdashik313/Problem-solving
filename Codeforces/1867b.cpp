#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();
vector<long long> sieve(long long MAXP);
bool palindrome(string s);

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

bool add_ones(string &s, int x){
    if(s.size()%2==0){
        if(x%2==0)
            return true;
        else 
            return false;
    }
    else 
        return true;
}

bool make_pal(string &s, int x, int req_toggle_count){
  
    if(req_toggle_count > x)
        return false;
    
    x -= req_toggle_count;

    if(x%2==0){
        if(s.size()-(req_toggle_count*2) >= x)
            return true;
        else 
            return false;
    }
    else{
        if(s.size()-(req_toggle_count*2) >= x && (s.size()-(req_toggle_count*2))%2==1)
            return true;
        else 
            return false;
    } 
        
}

void solve(){
    int n;cin>>n;
    string s;
    cin>>s;

    vector<int> res;

    if(palindrome(s)){
        res.pb(1);
        for(int i=1;i<=n;i++){
            if(add_ones(s,i)){
                res.pb(1);
            }
            else {
                res.pb(0);
            }
        }
    }
    else {
        int len = s.size() / 2;
        int req_toggle_count = 0;
        for (int i = 0, j = s.size() - 1; i < len; i++, j--)
        {
            if (s[i] != s[j])
            {
                req_toggle_count++;
            }
        }

        res.pb(0);
        for(int i=1;i<=n;i++){
            if(make_pal(s,i,req_toggle_count)){
                res.pb(1);
            }
            else {
                res.pb(0);
            }
        }
    }

    for(auto i : res) cout<<i;
    nl;

    return;
}

bool palindrome(string s){
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
    //find all prime numbers upto MAXP
    for(int i=2;i<MAXP;i++){
        if(mem[i]==1){
            res.push_back(i);
            for(int j=i;j<MAXP;j+=i) {mem[j]=0;}
        }
    }
    return res;
}


