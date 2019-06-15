#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int q;
    int test=1;
    while(scanf("%d%d",&n,&q) == 2)
    {
        if(!n && !q)
            break;
        else
        {
            int marbel[n];
            int query;

            for(int index = 0; index < n; index++)
                scanf("%d",&marbel[index]);
            sort(marbel,marbel+n);

            printf("CASE# %d:\n",test);
            for(int counter = 0; counter < q; counter++)
            {
                scanf("%d",&query);
                int index;
                for(index = 0; index < n; index++)
                {
                    if(marbel[index] == query)
                    {
                        printf("%d found at %d\n",query, index+1);
                        break;
                    }
                }
                if(index == n)
                    printf("%d not found\n", query);
            }
            test++;
        }
    }

    return 0;
}
