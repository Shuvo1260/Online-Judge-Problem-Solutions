#include<bits/stdc++.h>
using namespace std;


#define limit 46342
vector <int> prime_numbers(limit);
bool prime[limit];

int sieve()
{
    int prime_index = 0;
    for(int index = 0; index < limit; index++)
        prime[index] = true;
    prime_numbers[prime_index++] = 2;

    for(int number = 4; number <= limit; number+=2)
        prime[number] = false;

    for(int number = 3; number <= limit; number+=2)
    {
        if(prime[number])
        {
            for(int index = number * number; index <= limit; index += number )
                prime[index] = false;
            prime_numbers[prime_index++] = number;
        }
    }

    return prime_index;
}

int main()
{
    int total = sieve();

    long int n;

    while(scanf("%ld", &n) && n)
    {
        printf("%ld = ", n);
        bool sign = true;
        if(n < 0)
        {
            printf("-1");
            sign = false;
            n = -n;
        }
        if(n == 1 && !sign)
            printf(" x \n");
        else
        {
            int len = sqrt(n);
            for(int index = 0; prime_numbers[index] <= len && index < total && n;)
            {
                if(n % prime_numbers[index] == 0)
                {
                    if(!sign)
                        printf(" x ");
                    else
                        sign = false;
                    printf("%d", prime_numbers[index]);
                    n /= prime_numbers[index];
                }
                else
                {
                    index++;
                }
            }

            if(n > 1)
            {
                if(sign)
                printf("%ld", n);
                else
                    printf(" x %ld", n);
            }
            printf("\n");
        }


    }


    return 0;
}
