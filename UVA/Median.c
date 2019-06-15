#include<stdio.h>
int main()
{
    long long int median[100000],input,odd,i=0,j,n,k;
    while(scanf("%lld",&input)==1)
    {
        median[i]=input;
        for(j=0;j<i;j++)
        {
            if(input<median[j])
            {
                for(k=i;k>j;k--)
                    median[k]=median[k-1];
                median[j]=input;
                break;
            }


        }
        if(i%2==0)
        {
            printf("%lld\n",median[i/2]);
        }
        else
        {
            odd=median[i/2]+median[(i/2)+1];
            printf("%lld\n",odd/2);
        }
        i++;
    }
    return 0;
}
