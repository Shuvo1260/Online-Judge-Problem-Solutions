#include<cstdio>

int main()
{
    long long int data[100];

    int n;

    scanf("%d",&n);

    long long int sum = 0;

    for(int index = 0; index < n; index++)
    {
        scanf("%lld",&data[index]);
        sum += data[index];
    }

    printf("%lld\n",sum);


    return 0;
}

