#include<cstdio>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int number;
        scanf("%d",&number);
        int pos;
        int big;
        int small;


        for(int counter = 0; counter< number ; counter++)
        {
            scanf("%d",&pos);
            if(counter == 0)
            {
                big = pos;
                small = pos;
            }
            else if( big< pos)
                big = pos;
            else if( small > pos)
                small = pos;
        }
        printf("%d\n",2*( big - small));
    }

    return 0;
}
