#include<stdio.h>
#include<string.h>
int main()
{
    char a[80];
    int i,j,l,sum=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        int c=1;
        scanf("%s",&a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='O')
            {
                sum+=c;
                c++;
            }
            else if(a[j]=='X')
            {
                c=1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
