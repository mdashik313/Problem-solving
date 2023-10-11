#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();

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

ll max(ll a,ll b){return a<b?b:a;}
ll min(ll a,ll b){return a>b?b:a;}


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
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0,j=0;i<n;i++){
        int row=i,col=0;
        if(j<m-1){
            for(int k=j;k<m;k++){
                a[row][col]=k;
                col++;
            }
            for(int l=0;l<j;l++){
                a[row][col]=l;
                col++;
            }
            j++;
        }
        else {
            for(int k=0;k<m;k++) {
                a[row][col]=k;
                col++;
            }
        }
    }

    set<int> mex;
    for(int i=0;i<m;i++){
        set<int> st;
        for(int j=0;j<n;j++){
            st.insert(a[j][i]);
        }
        int mex_,k=0;
        for(auto &it : st){
            if(it!=k){
                mex_ = k;
                break;
            }
            else {
                k++;
                mex_=k;
            }
        }
        mex.insert(mex_);
    }
    int mex_,k=0;
    for(auto &it : mex){
        if(it!=k){
            mex_ = k;
            break;
        }
        else {
            k++;
            mex_=k;
        }
    }
    cout<<mex_;nl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        nl;
    }
    
    return;
}




