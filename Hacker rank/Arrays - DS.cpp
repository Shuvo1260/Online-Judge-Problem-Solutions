#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> data;
    int n;

    // Input
    cin >> n;

    while(n--)
    {
        int number;
        cin >> number;
        data.push_back(number);
    }

    // Reversing iterator
    vector <int> :: reverse_iterator it;

    // Printing reverse vector
    for(it = data.rbegin(); it != data.rend(); it++)
        cout << *it << " ";


    return 0;
}
