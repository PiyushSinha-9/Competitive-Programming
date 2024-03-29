#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<long long,long long> pll;

#define pi (3.141592653589)
#define mod 1000000007
#define F first
#define S second
#define print(x) for(auto iuiuiuiuiui:x){ cout<<iuiuiuiuiui<<" ";}br;
#define print_array(array,size) for(ll i=0;i<size;i++){ cout<<array[i]<<" ";}br;
#define br cout<<endl
#define pb push_back
#define mp(asd,fgh) make_pair(asd,fgh)
#define all(c) c.begin(),c.end()
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);

#define INF LONG_LONG_MAX
#define N_INF LONG_LONG_MIN

#pragma GCC target("popcnt")

//############################################################

const int N=1e5+3;
const int inf=1e9+7;
vector<int> dp(N,inf);

int solve(int n){
    if(n<=3){
        return n;
    }

    if(dp[n]!=inf){
        return dp[n];
    }

    for(int i=1;i*i<=n;i++){
        dp[n]= min(dp[n], solve(n-i*i) +1 );
    }

    return dp[n];
}


int solveTable(int n){
    vector<int> arr(n+1, inf);
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;


    for(int i=1;i*i<=n;i++){
        for(int j=0;i*i+j<=n;j++){
            arr[i*i+j] = min(arr[i*i+j], 1+arr[j]);
        }
    }


    return arr[n];
}


signed main() {
    fast
    #ifndef ONLINE_JUDGE
    FILE_READ_IN
    FILE_READ_OUT
    #endif

    //######################

    int n;
    cin>>n;

    cout<<solveTable(n);
    br;

    // cout<<solveTB

}
