#include<cstdio>


int main() {
    int cases;
    long long int n;

    scanf("%d", &cases);
    for(int test = 1; test <= cases; test++) {
        long long int sum[10001] = {0};
        for(int index = 0; index <= 5; index++)
        {
            scanf("%lld", &sum[index]);
            sum[6] += sum[index] % 10000007;
        }
        scanf("%lld", &n);

        for(int counter = 7; counter <= n; counter++)
        {
            sum[counter] = (sum[counter-1] + sum[counter-2] + sum[counter-3] + sum[counter-4] + sum[counter-5] + sum[counter-6]) % 10000007;
        }



        printf("Case %d: %lld\n", test, sum[n] % 10000007);
    }
    return 0;
}
