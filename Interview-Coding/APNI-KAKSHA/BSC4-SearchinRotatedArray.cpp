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
#define pb(a) push_back(a)
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


bool check(vector<int> sol){
    int n=sol.size();
    int val=0;
    for(int i=0;i<n-1;i++){
        val+=abs(sol[i]-sol[i+1]);
    }

    return val%2=0;
}

signed main() {
    fast
    #ifndef ONLINE_JUDGE
    FILE_READ_IN
    FILE_READ_OUT
    #endif

    //######################



    int testCase;
    cin>>testCase;

    while(testCase--){
        int n;
        cin>> n;

        vector<int> arr(n),sol(n), even, odd;
        int evensize=0, oddsize=0;

        for(int &i: arr){
            cin>>i;
            if(i%2==0){
                evensize+=1;
                even.push_back(i);
            }else{
                oddsize+=1;
                odd.pb(i);
            }
        }
        int i=0,ie=0,io=0;
        while(ie<evensize and io<oddsize and i!=n){
            if(ie<evensize){
                sol[i++]=even[ie++];
            }
            if(io<oddsize){
                sol[i++]=odd[io++];
            }
        }

        while(ie<evensize){
            sol[i++]=even[ie++];
        }

        while(io<oddsize){
            if(io<oddsize){
                sol[i++]=odd[io++];
            }
        }

        if(check(sol)){
            print(sol);
        }else{
            cout<<-1<<endl;
        }

    }
}
