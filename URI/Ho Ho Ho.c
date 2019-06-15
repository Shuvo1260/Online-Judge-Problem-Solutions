#include<stdio.h>
int main()
{
    long int input,i;
    scanf("%ld",&input);
    for(i=1;i<=input;i++)
    {
        if(i==input)
            printf("Ho!\n");
        else
            printf("Ho ");
    }
    return 0;
}
