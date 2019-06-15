#include<stdio.h>
int quicksort(int input[],int n,int begin,int end);
int main()
{
    long int i,j,n,t;

    while(scanf("%ld",&n)==1)
    {
        int input[n],begin,end,upper[n],lower[n],location=0,top;
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%ld",&input[i]);
            }
            if(n>0)
            {
                top=0;
                lower[0]=0;
                upper[0]=n-1;
            }
            while(top>=0)
            {
                begin=lower[top];
                end=upper[top];
                top--;
                location=quicksort(input,n,begin,end);
                if(begin<location-1)
                {
                    top++;
                    lower[top]=begin;
                    upper[top]=location-1;
                }
                if(location+1<end)
                {
                    top++;
                    lower[top]=location+1;
                    upper[top]=end;
                }
            }
            for(i=0;i<n;i++)
            {
                if(i==n-1)
                    printf("%ld\n",input[i]);
                else
                    printf("%ld ",input[i]);
            }
        }
    }
    return 0;
}
int quicksort(int input[],int n,int begin,int end)
{
    long int left,right,location,temp;
    left=begin;
    right=end;
    location=begin;
    first:
        while((input[location]<=input[right])&&(location!=right))
        {
            right--;
        }
        if(location==right)
        {
            return location;
        }
        if(input[location]>input[right])
        {
            temp=input[location];
            input[location]=input[right];
            input[right]=temp;
            location=right;
        }
        while((input[left]<=input[location])&&(location!=left))
        {
            left++;
        }
        if(location==left)
            return location;
        if(input[location]<input[left])
        {
            temp=input[location];
            input[location]=input[left];
            input[left]=temp;
            location=left;
            goto first;
        }
}
