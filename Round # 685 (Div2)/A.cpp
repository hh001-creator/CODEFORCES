#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL)
typedef long long int ll;

int main(){
    FastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans;
        if(n <= 3){
            ans = n - 1;
        }else if(n % 2 == 0){
            ans = 2;
        }else{
            ans = 3;
        }
        cout << ans << "\n";
    }
    return 0;
}