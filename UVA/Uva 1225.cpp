#include<cstdio>

int main()
{
    int test;

    scanf("%d", &test);
    while(test--)
    {
        int number;
        scanf("%d",&number);
        int data[10] = {0};
        for(int counter = 1; counter <= number; counter++)
        {
            int temp = counter;
            while(temp)
            {
                data[temp % 10] ++;
                temp /= 10;
            }
        }


        for(int index = 0; index < 10; index++)
        {
            if(index == 9)
                printf("%d\n",data[index]);
            else
                printf("%d ",data[index]);
        }
    }

    return 0;
}


