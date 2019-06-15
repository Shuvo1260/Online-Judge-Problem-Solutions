#include<stdio.h>
int main()
{
    int i,j=2,s=0,x,z;
    scanf("%d%d",&x,&z);
    while(x>=z)
    {
        scanf("%d",&z);
    }
    s=x+x+1;
    while(s<z)
    {
        s=s+x+j;
        j++;
    }
    printf("%d\n",j);


    return 0;

}
