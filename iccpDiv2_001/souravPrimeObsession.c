#include<stdio.h>
#include<stdbool.h> 
bool prime(int n)
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
}
void solve()
{
    int n;
    scanf("%d", &n);
    while(n){
        if(!prime(n)){
            printf("NO\n");
            return;
        }
        n /= 10;
    }
    printf("YES\n");
}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) solve();
    return 0;
}