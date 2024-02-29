#include<bits/stdc++.h>
using namespace std;
#define int long long 
auto solve1 = []()->void
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int data[26] = {0};
    for(int i=0;i<n;i++){
        data[s[i] - 'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        count += (data[i] > 0);
    }
    cout << count << '\n';
};
//TLE Code
// auto solve2 = []()->void
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());
//     int count = 1;
//     for(int i=0;i<n-1;i++){
//         count += (s[i]!=s[i+1]);
//     }
//     cout << count << '\n';
// };
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--) solve1();
    return 0;
}