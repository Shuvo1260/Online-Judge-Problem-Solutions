#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;

    int phoneNumber;

    int n;

    cin >> n;
    map <string, int> Dictionary;
    while(n--)
    {
        cin >> name >> phoneNumber;
        Dictionary[name] = phoneNumber;
    }

    while(cin >> name)
    {
        if(Dictionary.find(name) == Dictionary.end())
            cout << "Not found" << endl;
        else
            cout << name << "=" << Dictionary.at(name) << endl;
    }


    return 0;
}
