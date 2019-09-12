#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int q;


    cin >> n;

    vector <string> strings;

    string query;

    string stringValue;

    for(int index = 0; index < n; index++)
    {
        cin >> stringValue;
        strings.push_back(stringValue);
    }

    cin >> q;

    while(q--)
    {
        cin >> query;

        int counter = 0;
        for(int index = 0; index < n; index++)
        {
            if(strings[index] == query)
                counter++;
        }

        cout << counter << endl;
    }


    return 0;
}
