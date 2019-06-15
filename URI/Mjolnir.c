#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],na[7]="Thor";
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&name);
        scanf("%d",&n);
        if(strcmp(name,na)==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
