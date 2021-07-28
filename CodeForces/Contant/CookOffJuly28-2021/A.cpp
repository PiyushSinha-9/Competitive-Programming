//https://www.codechef.com/COOK131C/problems/SHOEFIT/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef pair<long long,long long> pll;



#define F first
#define S second
#define print(x) for(auto iuiuiuiuiui:x){ cout<<iuiuiuiuiui<<" ";}br;
#define print_array(array,size) for(ll i=0;i<size;i++){ cout<<array[i]<<" ";}br;
#define br cout<<"\n"
#define mod 1000000007
#define pb(a) push_back(a)
#define mp(asd,fgh) make_pair(asd,fgh)
#define all(c) c.begin(),c.end()
#define check_ cout<<"yo";

#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);

#define INF LONG_LONG_MAX
#define N_INF LONG_LONG_MIN

const int MV = 1e5+1;

#pragma GCC target("popcnt")

// ##################################################################


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
    FILE_READ_IN
    FILE_READ_OUT
	#endif

    //######################

    int testCase;
    cin>>testCase;

    while(testCase--){
        int a,b,c;
        cin>>a>>b>>c;
        int l=0,r=0;
        if(a==0 or b==0 or c==0)
        {
            l+=1;
        }
        if(a==1 or b==1 or c==1)
        {
            r+=1;
        }

        if(l==1 and r==1){
            cout<<1;
        }else{
            cout<<0;
        }
        br;
    }
    
}