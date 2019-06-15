#include<stdio.h>
#include<string.h>
int main()
{
    char a[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i,input;
    scanf("%d",&input);
    for(i=0;i<input;i++)
        printf("%c",a[i]);
    printf("\n");
    return 0;
}
