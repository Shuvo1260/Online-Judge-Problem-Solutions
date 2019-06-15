#include<stdio.h>
int main()
{
    int input;
    while(scanf("%d",&input)!=EOF)
    {
        if(input==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }
    return 0;
}
