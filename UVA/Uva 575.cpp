#include<cstdio>
#include<cstring>

using namespace std;

int Pow(int base, int power)
{
    int result = 1;

    for(int counter = 0; counter < power; counter++)
        result *= base;

    return result;
}


int main()
{
    char n[100];

    while(scanf("%s", n) == 1)
    {
        if(strcmp(n,"0") == 0)
            break;
        int len = strlen(n);
        long int skew = 0;
        int temp;
        for(int index = 1; index <= len; index++)
        {
            temp = n[len-index]-'0';
            skew += (temp * (Pow(2, index) - 1));
        }

        printf("%ld\n", skew);
    }



    return 0;
}
