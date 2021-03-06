#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;
#define foreq(i,a,b) for (int i = a; i <= b; i++)


#define printA(A,n) foreq(p,0,n-1){cout<<p<<": "<<A[p]<<endl;}
#define print(s) cout<<s<<endl

#define sq(a) (a)*(a)


// ios::sync_with_stdio(0);
// cin.tie(0);


int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt","w", stdout);
    // #endif
    int r,c;
    cin>>r>>c;
    vector<string> rows;

    int total = 0;
    foreq(i,0,r-1){
        string t;
        cin>>t;
        size_t pos = t.find('S');
        if(pos != string::npos){
            rows.push_back(t);
        }else{
            total += c;
        }
    }

    if(rows.size())
    foreq(i,0,c-1){
        bool contain = false;
        foreq(j,0,rows.size()-1){
            if(rows[j][i] == 'S'){
                contain = true;
                break;
            }
        }
        if(!contain){
            total += rows.size();
        }
    }

    print(total);

    return 0;
}