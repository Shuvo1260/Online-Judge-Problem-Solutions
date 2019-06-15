#include<stdio.h>
int main()
{
    int a,s=0,c=0;
    float d;
    while(scanf("%d",&a)!=EOF)
    {
        if(a<0)
            break;
        else
        {
            s+=a;
            c++;
        }
    }
    d=(float)s/c;
    printf("%.2f\n",d);
    return 0;
}
