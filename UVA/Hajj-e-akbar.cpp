#include<cstdio>
#include<cstring>
int main()
{
    char Input[20];
    char Exit[2]={"*"};
    int Test_counter=1;
    while(scanf("%s",Input))
    {
        if(strcmp(Input,"*")==0)
            break;
        else
        {
            if(strcmp(Input,"Hajj")==0)
                printf("Case %d: Hajj-e-Akbar\n",Test_counter++);
            else
                printf("Case %d: Hajj-e-Asghar\n",Test_counter++);
        }
    }

    return 0;
}
