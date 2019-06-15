#include<stdio.h>
int main()
{
    int i,j,d=1;
    double s=0,m[12][12];
    char t[2];
    scanf("%s",&t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    for(i=1;i<11;i++)
    {
        for(j=0;j<d;j++)
        {
            s+=m[i][j];
        }
        if(i<5)
        {
            d++;
        }
        else if(i>5)
        {
            d--;
        }
    }
    if(t[0]=='S')
    {
        printf("%.1lf\n",s);
    }
    else if(t[0]=='M')
    {
        printf("%.1lf\n",s/30);
    }
    return 0;

}

