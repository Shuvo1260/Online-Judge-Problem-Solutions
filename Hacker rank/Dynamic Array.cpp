#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n;
    lli q;

    scanf("%lld%lld", &n, &q);

    vector < vector<lli> > dynamicArray(n);

    lli lastAnswer = 0;

    while(q--)
    {
        lli key, x, y;

        scanf("%lld%lld%lld", &key, &x, &y);

        if(key == 1)
        {
            /**
            Query: 1 x y
            - Find the sequence, seq, at index "((x^lastAnswer) % n)" in dynamicArray.
            - Append integer y to sequence seq.
            **/
            int index = (x ^ lastAnswer) % n;

            dynamicArray[index].push_back(y);
        }
        else
        {
            /**
            Query: 2 x y
            - Find the sequence, seq, at index ((x^lastAnswer) % n) in dynamicArray.
            - Find the value of element "y % dynamicArray[index].size()" and assign it to lastAnswer.
            - Print the new value of lastAnswer on a new line
            **/
            int index = (x ^ lastAnswer) % n;

            lastAnswer = dynamicArray[index][y % dynamicArray[index].size()];

            printf("%lld\n", lastAnswer);
        }
    }

    return 0;
}
