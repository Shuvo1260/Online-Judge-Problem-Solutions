#include<stdio.h>
int main()
{
    int n,i,counter=1;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;
        else
        {
            int arr[n],sum=0,put=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
                sum+=arr[i];
            }
            sum/=n;
            for(i=0;i<n;i++)
            {
                if(arr[i]<sum)
                {
                    put=put+(sum-arr[i]);
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n",counter,put);
        }
        counter++;

    }
    return 0;
}
