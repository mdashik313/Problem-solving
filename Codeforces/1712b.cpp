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

int insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    int count=0;
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1],  
        // that are greater than key, to one 
        // position ahead of their 
        // current position
        
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
            count++;
        } 
        arr[j + 1] = key; 
    } 
    return count;
} 

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
    int n,k,x;
    cin>>n;

    int ara[n];
    
    for(int i=n; i>=1; i-=2) {
        ara[i] = i-1;
        ara[i-1] = i;
    }
    if(n%2==1) ara[1]=1;
    for(int i=1; i<=n; i++) {
        cout<<ara[i]<<" ";
    }
    cout<<endl;


    return;
}
