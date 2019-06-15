#include<stdio.h>
#include<math.h>
int main()
{
    int a[3000],b[3000],t,c;
    while(scanf("%d",&t)!=EOF)
    {
        int i,j=0,temp;
        c=0;

        for(i=0;i<t;i++)
            scanf("%d",&a[i]);
        for(i=0;i<t-1;i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        for(i=0;i<t-1;i++)
        {
            for(j=0;j<t-i-2;j++)
            {
                if(b[j]>b[j+1])
                {
                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
        }

        for(i=0;i<t-1;i++)
        {
            if(b[i]<=0||b[i]>t-1||b[i]!=i+1)
            {
                c=1;
                break;
            }
        }


        if(c==1)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
