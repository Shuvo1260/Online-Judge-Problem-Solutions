#include<stdio.h>
int factorial(int n)
{
    if(n>=1)
        return (n*factorial(n-1));
    else
        return 1;
}
int main()
{
    int n,s;
    scanf("%d",&n);


    n=factorial(n);

    printf("%d\n",n);


    return 0;
}
