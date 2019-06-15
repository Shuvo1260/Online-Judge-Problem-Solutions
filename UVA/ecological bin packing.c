#include<stdio.h>
int main()
{
    long int main[6],b[3],c[3],g[3],i,low;
    while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])==9)
    {
        main[0]=b[1]+b[2]+g[0]+g[1]+c[0]+c[2];
        main[1]=b[1]+b[2]+g[0]+g[2]+c[0]+c[1];
        main[2]=b[0]+b[2]+g[0]+g[1]+c[1]+c[2];
        main[3]=b[0]+b[1]+g[0]+g[2]+c[1]+c[2];
        main[4]=b[0]+b[2]+g[1]+g[2]+c[0]+c[1];
        main[5]=b[0]+b[1]+g[1]+g[2]+c[0]+c[2];
        low=main[0];
        for(i=1;i<6;i++)
        {
            if(main[i]<low)
                low=main[i];
        }
        for(i=0;i<6;i++)
        {
            if(main[i]==low)
            {
                if(i==0)
                    printf("BCG %ld\n",main[i]);
                else if(i==1)
                    printf("BGC %ld\n",main[i]);
                else if(i==2)
                    printf("CBG %ld\n",main[i]);
                else if(i==3)
                    printf("CGB %ld\n",main[i]);
                else if(i==4)
                    printf("GBC %ld\n",main[i]);
                else if(i==5)
                    printf("GCB %ld\n",main[i]);
                break;
            }
        }
    }
    return 0;
}
