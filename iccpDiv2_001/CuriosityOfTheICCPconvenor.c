#include <stdio.h>
#include <string.h>

void solve1() {
    int n;
    scanf("%d", &n); 
    char s[n];
    scanf("%s", s);
    int data[26] = {0};
    for (int i = 0; i < n; i++) {
        data[s[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += (data[i] > 0);
    }
    printf("%d\n", count);
}

int main() {
    int test;
    scanf("%d", &test);
    while (test--) 
        solve1();
    return 0;
}
