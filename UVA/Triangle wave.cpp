#include<stdio.h>
int main()
{
    int Test;
    scanf("%d",&Test);

    while(Test--)
    {
        scanf("\n");
        int Height;
        int Frequency;
        scanf("%d%d",&Height,&Frequency);
        for(int Number_Of_Frequency=0;Number_Of_Frequency<Frequency;Number_Of_Frequency++)
        {
            for(int Long=1;Long<=Height;Long++)
            {
                for(int High=1;High<=Long;High++)
                    printf("%d",Long);
                printf("\n");
            }
            for(int Long=Height-1;Long>=1;Long--)
            {
                for(int High=1;High<=Long;High++)
                    printf("%d",Long);
                printf("\n");
            }
            if(Number_Of_Frequency!=Frequency-1)
                printf("\n");
        }
        if(Test!=0)
            printf("\n");
    }
    return 0;
}
