#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) == 1 && n)
    {
        int signalSamples[n+2];

        for(int index = 0; index < n; index++)
            scanf("%d", &signalSamples[index]);
        signalSamples[n] = signalSamples[0];
        signalSamples[n+1] = signalSamples[1];
        int peak = 1;
        bool up;

        if(signalSamples[0] < signalSamples[1])
            up = true;
        else
            up = false;

        for(int index = 2; index <= n; index++)
        {
            if(signalSamples[index-1] < signalSamples[index] && !up)
            {
                up = true;
                peak++;
            }
            else if(signalSamples[index-1] > signalSamples[index] && up)
            {
                up = false;
                peak++;
            }
        }
        if(signalSamples[n] < signalSamples[n+1] && up)
        {
            peak--;
        }
        else if(signalSamples[n] > signalSamples[n+1] && !up)
        {
            peak--;
        }
        printf("%d\n", peak);
    }

    return 0;
}
