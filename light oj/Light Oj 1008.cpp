#include<bits/stdc++.h>

using namespace std;


int main()
{
    int test;
    long long int s;

    long long int x, y;

    scanf("%d", &test);

    for(int Case = 1; Case <= test; Case++)
    {
        scanf("%lld", &s);

        long long int  n = ceil(sqrt(s));

        long long int difference = n * n - s;

        if(difference < n)
        {
            y = n;
            x = difference+1;
        }
        else
        {cout << n << " " << difference << endl;
            x = n;
            y = s - (n -1) * (n -1);
        }

        if( n % 2 == 0)
        {
            long long int temp = x;
            x = y;
            y = temp;
        }




        printf("Case %d: %lld %lld\n", Case, x, y);
    }


    return 0;
}
