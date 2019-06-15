#include<cstdio>

bool ascending(int data[11])
{
    for(int index = 0; index < 9; index++)
    {
            if(data[index] > data[index+1])
                return false;
    }
    return true;
}
bool descending(int data[11])
{
    for(int index = 0; index < 9; index++)
    {
            if(data[index] < data[index+1])
                return false;
    }
    return true;
}
int main()
{
    int test;

    scanf("%d", &test);
    printf("Lumberjacks:\n");
    while(test--)
    {
        int data[11];
        for(int index = 0; index < 10; index++)
        {
            scanf("%d", &data[index]);
        }
        bool flag;
        if(data[0] < data[1])
            flag = ascending(data);
        else
            flag = descending(data);

        if(flag)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }

    return 0;
}
