//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

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
#define check_ cout<<"yo\n";

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

    int n1,n2;
    cin>>n1>>n2;

    vector<int> arr1(n1), arr2(n2), arr(n1+n2);

    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }


    int l=0,r=0, k=0;

    while(l<n1 or r<n2){
        if(r==n2 or (l<n1 and arr1[l]<=arr2[r])){
            arr[k]=arr1[l];
            ++k;
            ++l;
        }else{
            arr[k]=arr2[r];
            ++k;
            ++r;
        }
    }

    for(int i:arr){
        cout<<i<<" ";
    }

    
}