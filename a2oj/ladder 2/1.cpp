#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;

typedef long long ll;
#define foreq(i,a,b) for (int i = a; i <= b; i++)

#define swap(A,swapi,swapj) {A[swapi] = A[swapi] + A[swapj]; A[swapj] = A[swapi]-A[swapj]; A[swapi] = A[swapi]-A[swapj];}

#define printA(A,n) foreq(p,0,n-1){cout<<p<<": "<<A[p]<<endl;}
#define print(s) cout<<s<<endl;

#define sq(a) (a)*(a)


// ios::sync_with_stdio(0);
// cin.tie(0);


int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt","w", stdout);
    // #endif
    int n;
    cin>>n;
    while(n--){
        int a[10];
        foreq(i,0,9) cin>>a[i];

        a[distance(a,min_element(a,a+10))] = INT_MAX;

        print(*min_element(a,a+10));
    }

    return 0;
}