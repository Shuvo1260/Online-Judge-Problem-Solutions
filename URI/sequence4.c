#include<stdio.h>
int main()
{
    float i,k;
    int j;
    for(i=0;i<1.9;i=i+0.2)
    {
        for(j=1;j<=3;j++)
        {
            k=i+j;

            if(i==0||i==1)
            {
                printf("I=%.0f ",i);
                printf("J=%.0f\n",k);
            }

            else
            {
                printf("I=%.1f ",i);
                printf("J=%.1f\n",k);
            }


        }

    }
    for(j=3;j<=5;j++)
    {
        printf("I=2 J=%d\n",j);
    }
    return 0;
}
