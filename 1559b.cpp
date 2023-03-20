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
        string st;
        char ch;
        scanf(" %lld", &n);
        cin>>st;
        if(st.length()==1) {
            if(st == "?") cout<<"B\n";
            else cout<<st<<"\n";
        } 
        else {
            int x=0;
           
            if(st[0]=='?'){
                for(int i=1; i<st.length(); i++){
                    if(st[i] != '?') {
                        x = i;
                        ch = st[i]; break;
                    }
                }
                for(int i = x-1; i >= 0; i--){
                    if(ch == 'B') st[i]='R';
                    else st[i]='B';
                    ch = st[i];
                }
            }
            ch = st[0];
            for(int i=0; i<st.length(); i++){
                if(st[i]=='?'){
                    if(ch=='B') st[i] = 'R';
                    else st[i] = 'B';
                }
                ch = st[i];
            }
            cout<<st<<"\n";
        }
    }
    
    return 0;
}
