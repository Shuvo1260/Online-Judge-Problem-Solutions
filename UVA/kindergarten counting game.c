#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    int i,counter;
    while(gets(a))
    {
        counter=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))&&((a[i+1]<'a'||a[i+1]>'z')&&(a[i+1]<'A'||a[i+1]>'Z')))
            {
                  counter++;
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
