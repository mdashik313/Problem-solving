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
        scanf("%lld", &n);
        int size = (n-2)*2;
        char ch[size];
        for(int i=0; i<size; i++) cin>>ch[i];
        cout<<ch[0];
        int count=2;

        for(int i=1; i<size-1; i+=2){
            if(ch[i]==ch[i+1]){
                cout<<ch[i];
                count++;
            }
            else {
                cout<<ch[i]<<ch[i+1];
                count+=2;
            }
        }
        cout<<ch[size-1];
        if(count != n) {
            cout<<ch[size-1]<<"\n";
        }
        else cout<<"\n";
        
    }
    
    return 0;
}
