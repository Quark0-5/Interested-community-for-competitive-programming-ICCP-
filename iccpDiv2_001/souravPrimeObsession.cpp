#include<bits/stdc++.h>
using namespace std; 
auto solve = []()->void
{
    int n;
    cin >> n;
    auto prime = [](int n)->bool
    {
        if(n <= 1 ||(n%2==0 && n != 2)){
            return false;
        }else if(n == 2){
            return true;
        }else{
            for(int i=3;i*i <= n;i+=2){
                if(n%i == 0){
                    return false;
                }
            }
        }
        return true;
    };
    while(n){
        if(!prime(n)){
            cout << "NO" << '\n';
            return;
        }
        n /= 10;
    }
    cout << "YES" << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}
