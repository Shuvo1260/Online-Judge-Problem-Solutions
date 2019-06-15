#include<stdio.h>

long long int prime(long long int n)
{
    while(n%2==0||n%3==0||n%5==0)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else if(n%3==0)
        {
            n/=3;
        }
        else if(n%5==0)
        {
            n/=5;
        }
    }
    return n;
}

int main()
{
    long long int c=1,n,a,b;

    for(n=2;;n++)
    {

        if(n%2==0||n%3==0||n%5==0)
        {
            b=prime(n);
            if(b==1)
            {
                a=n;
                c++;
                if(c==1500)
                    break;
            }


        }
    }
    printf("The 1500'th ugly number is %lld \n",a);

}
