#include<stdio.h>
int main()
{
    int i=1,j=1;
    float s=0,d;
    while(i<=39)
    {
        d=(float)i/j;
        s+=d;
        i+=2;
        j+=j;
    }
    printf("%.2f\n",s);
    return 0;
}
