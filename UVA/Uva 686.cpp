#include<cstdio>

int main()
{
    int len = 33001;
    bool prime[len];

    for(int index = 0; index < len; index++)
        prime[index] = true;

    for(int p = 2; p*p < len; p++)
    {
        if(prime[p])
            for(int index = p*2; index < len; index += p)
                prime[index] = false;
    }

    int number;

    while(scanf("%d", &number) == 1)
    {
        if(!number)
            break;
        else
        {
            int counter = 0;
            for(int index = 2; index <= number; index++)
            {
                if(prime[index])
                {
                    for(int sub_index = index; sub_index <= number; sub_index++)
                    {
                        if(prime[sub_index] && index + sub_index == number)
                        {
                            counter++;
                        }
                    }

                }
            }
            printf("%d\n", counter);
        }
    }

    return 0;
}
