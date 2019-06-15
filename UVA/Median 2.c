#include<stdio.h>
long long int quicksort(long long int median[],long long int n,long long int first,long long int last);
int main()
{
    long long int median[100000],input,odd;
    int i=0,n;
    FILE *f;
    f=fopen("result.txt","a");
    while(scanf("%lld",&input)==1)
    {
        int begin,end,lower[100000],upper[100000],location=0,top=1;
        median[i]=input;
        n=i+1;
        quicksort(median,n,0,i);
        if(i%2==0)
        {
            fprintf(f,"%lld\n",median[i/2]);
        }
        else
        {
            odd=median[i/2]+median[i/2+1];
            fprintf(f,"%lld\n",odd/2);
        }
        i++;
    }
    return 0;
}
long long int quicksort(long long int median[],long long int n,long long int first,long long int last)
{
    long long int left,right,pivot;
    long long int temp;
    if(first<last)
    {
        left=first;
        right=last;
        pivot=first;
        while(left<right)
        {
            while(median[left]<=median[pivot]&&left<last)
                left++;
            while(median[right]>median[pivot])
                right--;
            if(left<right)
            {
                temp=median[left];
                median[left]=median[right];
                median[right]=temp;
            }
        }
        temp=median[pivot];
        median[pivot]=median[right];
        median[right]=temp;
        quicksort(median,n,first,right-1);
        quicksort(median,n,right+1,last);
    }
}
