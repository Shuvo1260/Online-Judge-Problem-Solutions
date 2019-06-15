#include<cstdio>
#include<cmath>
int main()
{
    int a;
    int b;

    while(scanf("%d%d",&a,&b) == 2)
    {
        if(!a && !b)
            break;
        else
        {
            int counter = 0;
            int root;
            for(int number = a; number <= b; number++)
            {
                root = (int) sqrt(number);
                if((root * root) == number)
                    counter++;
            }
            printf("%d\n",counter);
        }

    }

    return 0;
}
