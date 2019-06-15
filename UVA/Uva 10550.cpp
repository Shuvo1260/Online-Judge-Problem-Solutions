#include<cstdio>
int main()
{
    int position;
    int first;
    int second;
    int third;

    while(scanf("%d%d%d%d",&position,&first,&second,&third) == 4)
    {
        if(!position && !first && !second && !third)
            break;
        long int sum = 0;

        if(position > first)
            sum += (position - first);
        else
            sum += 40 - (first - position);

        if(first < second)
            sum += (second - first);
        else
            sum += 40 - (first - second);
        if(second > third)
            sum += (second - third);
        else
            sum += 40 - (third - second);

        printf("%ld\n",1080+ sum * 9);
    }

}
