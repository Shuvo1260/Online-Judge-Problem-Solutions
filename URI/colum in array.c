#include<stdio.h>
int main()
{
    int c,i,j;
    double s=0,m[12][12];
    char t[2];
    scanf("%d",&c);
    scanf("%s",t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
            if(j==c)
            {
                s+=m[i][j];
            }
        }
    }
    if(t[0]=='S')
    {
        printf("%.1lf\n",s);
    }
    else if(t[0]=='M')
    {
        printf("%.1lf\n",s/12);
    }
    return 0;
}
