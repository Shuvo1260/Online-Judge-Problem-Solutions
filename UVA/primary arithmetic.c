#include<stdio.h>
int main()
{
    long long int first,second;
    int fir,sec,carry,counter,sum;
    while((scanf("%lld%lld",&first,&second)!=EOF))
    {
        if(first==0&&second==0)
        break;
            carry=0;
            counter=0;
           while(first>0||second>0)
            {
                fir=first%10;
                sec=second%10;
                sum=fir+sec+carry;
                if(sum>9)
                    {
                        counter++;
                        carry=sum/10;

                    }
                else
                    carry=0;
                first/=10;
                second/=10;
            }
            if(counter==0)
                printf("No carry operation.\n");
            if(counter==1)
                printf("1 carry operation.\n");
            if(counter>1)
                printf("%d carry operations.\n",counter);

    }
    return 0;
}
