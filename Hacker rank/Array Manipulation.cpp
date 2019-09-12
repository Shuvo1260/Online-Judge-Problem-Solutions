#include<bits/stdc++.h>

using namespace std;



long Array[10000001];
int main()
{
    long n;
    long m;

    scanf("%ld%ld", &n, &m);



    /** -Given a range[, ] and a value  we need to add  to all the numbers whose indices are in the range from [, ].
    -We can do an O() update by adding  to index  and add  to index .
    -Doing this kind of update, the  number in the array will be prefix sum of array from index 1 to i because
    we are adding  to the value at index  and subtracting  from the value at index  and taking prefix sum will
    give us the actual value for each index after  operations .
    -So, we can do all  updates in O(m) time. Now we have to check the largest number in the original array.
     i.e. the index i such that prefix sum attains the maximum value.
    -We can calculate all prefix sums as well as maximum prefix sum in O(n) time which will execute in time.**/
    while(m--)
    {
        long a, b, k;

        scanf("%ld%ld%ld", &a, &b, &k);

        Array[a-1] += k;
        Array[b] -= k;
    }

    long maximum = Array[0];
    for(long index = 1; index < n; index++)
    {
        Array[index] += Array[index-1];
        maximum = max(maximum, Array[index]);
    }
    printf("%ld\n", maximum);




    return 0;
}
