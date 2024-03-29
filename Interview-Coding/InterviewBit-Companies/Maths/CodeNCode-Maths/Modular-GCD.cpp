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

#define int long long int

int powerMod(int a, int n, int MOD){
    int res =1;
    while(n){
        if(n%2==1){
            res = (res%MOD * a%MOD)%MOD;
            n-=1;
        }
        
        if(n%2==0){
            a = (a%MOD * a%MOD)%MOD;
            n/=2;
        }
    }

    return res;
}

int helper(int a, int b, int n){
    if(a==b){       // in GCD (x, (a-b) which is 0) = x 
        return (powerMod(a,n,mod) + powerMod(b,n,mod))%mod;
    }

    int candidate = 1;
    int dif = abs(a-b);
    for(int i=1;i*i<=dif;++i){
        if(dif%i == 0){
            int val1 = powerMod(a,n,i);
            int val2 = powerMod(b,n,i);
            int temp = (val1 + val2)%i;
            if(temp==0){
                candidate = max(candidate, i);
            }

            // if n is divisble by num and num/n is also divisible by n check that also

            val1 = powerMod(a,n,dif/i);
            val2 = powerMod(b,n,dif/i);
            temp = (val1 + val2)%(dif/i);
            if(temp==0){
                candidate = max(candidate, dif/i);
            }
        }
    }

    return candidate%mod;
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
        int a,b,n;
        cin>>a>>b>>n;

        cout<<helper(a,b,n);
        br;

    }
}





/* ----------------------------------------------------------------------    50 Points on CodeChef
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

#define int long long 

int powerMOD(int a, int pow, int md){

    int value =1;

    while(pow){
        if(pow%2){
            value = (value%md * a%md)%md;
            pow-=1; 
        }

        if(pow%2==0){
            a = (a%md * a%md)%md;
            pow/=2;
        }
    }

    return value%mod;
}


int gcd_Iterative(int a, int b){

    while(b){
        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
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
        int a, b, n;
        cin>>a>>b>>n;
        int sub =abs(a-b);
        bool flag = false;
        if(sub==0){
        
            int value1 = powerMOD(a, n, mod);
            int value2= powerMOD(b, n, mod);

            cout<<((value1+value2) % mod);br;
            continue;
        }

        int value1 = powerMOD(a%sub, n, sub);
        int value2= powerMOD(b%sub, n, sub);

        cout<<gcd_Iterative(value1+value2,sub)%mod;
        br;
    }
}
*/