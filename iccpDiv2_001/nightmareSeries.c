#include <stdio.h>

void solve1() {
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", (n&1?((n/2)+1):(-n/2)));
}
//tle
// void solve2() {
//     int n;
//     scanf("%d", &n);
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum += (i&1?i:-i);
//     }
//     printf("%d\n", sum);
// }
int main() {
    int test;
    scanf("%d", &test);
    while (test--) 
        solve1();
    return 0;
}
