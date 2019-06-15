#include<stdio.h>
int main()
{
    int i;
    float d,s=0;

    for(i=1;i<=100;i++)
    {
        d=(float)1/i;
        s+=d;
    }
    printf("%.2f\n",s);
    return 0;
}
