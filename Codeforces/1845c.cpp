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

void solve(){
    string s,l,r;
    int m;
    cin>>s>>m>>l>>r;
    
    int left_idx=0,right_idx=s.size()-1;
    
    for(int i=0;i<l.size();i++){
    	int x = l[i] - 48;
    	int y = r[i] - 48;
    	
        vector<int> indices;
    	for(;x<=y;x++){
            bool found=false;
    		for(int j=left_idx;j<=right_idx;j++){
    			if((int)s[j]-48==x) {
                    indices.pb(j);
                    found=true;
    				break;
    			}
    		}
            if(!found){
                yes;
                return;
            }
    	}

        sort(indices.begin(),indices.end());
        left_idx = indices[indices.size()-1]+1;
    	
    }

    no;
    
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



