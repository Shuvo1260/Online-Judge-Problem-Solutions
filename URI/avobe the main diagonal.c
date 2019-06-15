#include<stdio.h>
int main()
{
    int c,i,j,l=1;
    double s=0,o[12][12];
    char t[2];
    scanf("%d",&c);
    scanf("%s",t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&o[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=l;j<12;j++)
        {
            s+=o[i][j];
        }
        l++;
    }

    if(t[0]=='S')
    {
        printf("%.1lf\n",s);
    }
    else if(t[0]=='M')
    {
        printf("%.1lf\n",s/66);
    }
    return 0;
}

