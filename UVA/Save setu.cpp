#include<cstdio>
#include<cstring>
int main()
{
    char Input[20];
    int Amount;
    int Test_case;
    int Test;
    int Donate=0;
    scanf("%d",&Test_case);
    for(Test=1;Test<=Test_case;Test++)
    {
        scanf("%s",Input);
        if(strcmp(Input,"donate")==0)
        {
            scanf("%d",&Amount);
            Donate+=Amount;
        }
        else if(strcmp(Input,"report")==0)
            printf("%d\n",Donate);
    }
    return 0;
}
