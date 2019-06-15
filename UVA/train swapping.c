#include<stdio.h>
int main()
{
    int counter,first,second,i,j,m,n;
    while(scanf("%d",&first)==1)
    {
        for(i=0;i<first;i++)
        {
            scanf("%d",&second);
            int train[second],temp;
            for(j=0;j<second;j++)
                scanf("%d",&train[j]);
            counter=0;
            for(m=0;m<second-1;m++)
            {
                for(n=0;n<second-m-1;n++)
                {
                    if(train[n]>train[n+1])
                    {
                        temp=train[n];
                        train[n]=train[n+1];
                        train[n+1]=temp;
                        counter++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",counter);
        }
    }

    return 0;
}
