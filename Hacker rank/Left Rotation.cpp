#include<bits/stdc++.h>

using namespace std;

typedef long int li;

int main()
{
    li n, rotation;

    scanf("%ld%ld", &n, &rotation);

    li elements[n];
    li result[n];
    li resultIndex;

    for(li index = 0; index < n; index++)
    {
        scanf("%ld", &elements[index]);

        /// determining the rotated index law: (n - (r - 1)) % n
        resultIndex = (n - (rotation - index)) % n;

        result[resultIndex] = elements[index];
    }
    for(li index = 0; index < n; index++)
    {
        printf("%ld ", result[index]);
    }



    return 0;
}

