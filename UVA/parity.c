#include<stdio.h>
int main()
{
    long long int input,bit[10000],i,n,counter;
    while(scanf("%lld",&input)==1)
    {
        i=0,counter=0;
        if(input==0)
            break;
        else
        {
            while(input!=0)
            {
                bit[i]=input%2;
                input=input/2;
                if(bit[i]==1)
                    counter++;
                i++;
            }
            n=i;
            printf("The parity of ");
            for(i=n-1;i>=0;i--)
                printf("%lld",bit[i]);
            printf(" is %lld (mod 2).\n",counter);
        }
    }
    return 0;
}
