#include<stdio.h>
int main()
{
    int c=11,i,j;
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
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<c;j++)
        {
            s+=m[i][j];
        }
        c--;
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



