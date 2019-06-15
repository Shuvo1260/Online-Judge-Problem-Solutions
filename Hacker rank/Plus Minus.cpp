#include<cstdio>
#include<cstdlib>

int main()
{
    int n;

    scanf("%d",&n);

    int data;

    int Plus = 0;
    int Minus = 0;
    int Zero = 0;


    for(int index = 0; index < n; index++)
    {
        scanf("%d", &data);
        if(data > 0)
            Plus++;
        else if(data < 0)
            Minus++;
        else
            Zero++;
    }

    printf("%f\n",(float)Plus/n);
    printf("%f\n",(float)Minus/n);
    printf("%f\n",(float)Zero/n);


    return 0;
}




