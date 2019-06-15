#include<cstdio>

int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        if(!n)
            break;

        else
        {
            int data[n];
            int index = 0;
            int value;

            for(int counter = 0; counter < n; counter++)
            {
                scanf("%d", &value);
                if(value > 0)
                    data[index++] = value;
            }
            if(!index)
                printf("0\n");
            else
            {
                for(int counter = 0; counter < index; counter++)
                {
                    if(counter == index-1)
                        printf("%d\n", data[counter]);
                    else
                        printf("%d ", data[counter]);
                }
            }



        }
    }

    return 0;
}
