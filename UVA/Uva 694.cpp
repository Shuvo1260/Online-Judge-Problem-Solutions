#include<cstdio>

int main()
{
    long long int a;
    long long int l;
    int Case = 1;
    while(scanf("%lld%lld", &a,&l) == 2)
    {
        if(a == -1 && l == -1)
            break;
        else
        {
            printf("Case %d: A = %lld, limit = %lld, number of terms = ",Case++, a, l);
            int counter = 0;

            while(a != 1)
            {
                if(a > l)
                    break;
                else
                {
                    counter++;
                    if(a%2 == 0)
                        a /= 2;
                    else
                        a = 3*a + 1;
                }
            }
            if(a == 1)
                counter++;
            printf("%d\n",counter);
        }
    }


    return 0;
}
