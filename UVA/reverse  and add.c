#include<stdio.h>
long long int reverse(long long int in)
{
    long long int vag=0,mod;
    while(in>0)
    {
        mod=in%10;
        in/=10;
        vag=vag*10+mod;
    }

    return vag;
}
int main()
{
    long long int input,i,rev,counter;
    int test;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%lld",&input);
        rev=reverse(input);
        for(counter=0;rev!=input;)
        {
            input+=rev;
            rev=reverse(input);
            counter++;
                if(rev==input)
                    break;
        }
        printf("%lld %lld\n",counter,input);
    }
    return 0;
}
