#include<stdio.h>
int main()
{
    int i,j,s=0,c=0,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        c=0;
        scanf("%d%d",&a,&b);
        for(j=a;c<b;j++)
        {
            if(j%2!=0)
            {
                c++;
                s+=j;
            }
        }
        printf("%d\n",s);

    }
    return 0;
}
