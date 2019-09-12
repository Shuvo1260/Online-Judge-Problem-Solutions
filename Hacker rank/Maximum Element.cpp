#include<bits/stdc++.h>

using namespace std;


int main()
{
    /// Using pair to avoid duplicate items
    stack <pair <long, long> > container;
    stack <pair <long, long> > maximumStack;

    long n;
    long x;
    int type;
    long maximum = 0;

    cin >> n;

    pair <long, long> tempPair, maxPair;

    for(int index = 0; index < n; index++)
    {
        cin >> type;

        if(type == 1)
        {
            /// Pushing the value top of the stack
            cin >> x;
            container.push(make_pair(x, index));
            /// Pushing the maximum value top of the maxStack
            if(maximumStack.empty())
                maximumStack.push(make_pair(x, index));
            else
            {
                tempPair = maximumStack.top();
                if(tempPair.first < x)
                    maximumStack.push(make_pair(x, index));
            }
        }
        else if(type == 2)
        {
            if(!container.empty())
            {
                /// Removing top value of the stack
                tempPair = container.top();
                container.pop();

                /// Removing maximum value from the maxStack
                maxPair = maximumStack.top();
                if(tempPair.first == maxPair.first && tempPair.second == maxPair.second)
                {
                    maximumStack.pop();
                }
            }

        }
        else
        {
            cout << maximumStack.top().first << endl;
        }
    }


    return 0;
}
