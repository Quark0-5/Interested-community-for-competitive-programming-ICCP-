#include<bits/stdc++.h>
using namespace std;
#define int long long 
auto solve1 = []()->void
{
    int n;
    cin >> n;
    cout << (n&1)?((n/2)+1):(-(n/2)) << '\n';
};
// auto solve2 = []()->void
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum += (i&1?i:-i);
//     }
//     cout << sum << '\n';
// };
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--) solve1();
    return 0;
}