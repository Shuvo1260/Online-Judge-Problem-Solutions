#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> first, second, third;

    int len1, len2, len3;

    scanf("%d%d%d", &len1, &len2, &len3);

    int value;

    int sum1 = 0, sum2 = 0, sum3 = 0;


    for(int index = 0; index < len1; index++)
    {
        scanf("%d", &value);
        first.push_back(value);
        sum1+= value;
    }
    reverse(first.begin(), first.end());

    for(int index = 0; index < len2; index++)
    {
        scanf("%d", &value);
        second.push_back(value);
        sum2+= value;
    }
    reverse(second.begin(), second.end());

    for(int index = 0; index < len3; index++)
    {
        scanf("%d", &value);
        third.push_back(value);
        sum3+= value;
    }
    reverse(third.begin(), third.end());

    /// Initializing and Pushing values into stack in reverse order

    stack <int, vector <int> > firstStack(first);
    stack <int, vector <int> > secondStack(second);
    stack <int, vector <int> > thirdStack(third);




    while(sum1 != sum2 || sum2 != sum3)
    {
        /// if sum1 is big then pop the top element of the first stack
        if(sum1 > sum2 || sum1 > sum3)
        {
            sum1 -= firstStack.top();
            firstStack.pop();
        }

        /// if sum2 is big then pop the top element of the second stack
        if(sum2 > sum1 || sum2 > sum3)
        {
            sum2 -= secondStack.top();
            secondStack.pop();
        }

        /// if sum3 is big then pop the top element of the third stack
        if(sum3 > sum1 || sum3 > sum2)
        {
            sum3 -= thirdStack.top();
            thirdStack.pop();
        }
    }

    cout << sum1 << endl;




    return 0;
}
