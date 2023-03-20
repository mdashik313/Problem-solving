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
        int ab=0,ba=0;

        for(int i=0; i<s.size()-1; i++) {
            if(s[i] == 'a') {
                if(s[i+1] == 'b') {
                    ab++; 
                }
            }
            else {
                if(s[i+1] == 'a') ba++;
            }
        }
        if(ab==ba) cout<<s<<"\n";
        else if(ab>ba) {
            for(int i=0; i < s.size(); i++){
                if(s[i]=='a') {
                    s[i]='b'; 
                    break;
                }
            }
            cout<<s<<"\n";
        }
        else {
            for(int i=0; i < s.size(); i++){
                if(s[i]=='b') {                   
                    s[i]='a'; 
                    break;
                }
            }
            cout<<s<<"\n";
        }
    }
    
    return 0;
}
