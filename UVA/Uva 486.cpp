#include<bits/stdc++.h>
#include<map>

using namespace std;

map <string, long> dictionary;

void dictionaryCreate()
{
    dictionary["zero"] = 0;
    dictionary["one"] = 1;
    dictionary["two"] = 2;
    dictionary["three"] = 3;
    dictionary["four"] = 4;
    dictionary["five"] = 5;
    dictionary["six"] = 6;
    dictionary["seven"] = 7;
    dictionary["eight"] = 8;
    dictionary["nine"] = 9;
    dictionary["ten"] = 10;
    dictionary["eleven"] = 11;
    dictionary["twelve"] = 12;
    dictionary["thirteen"] = 13;
    dictionary["fourteen"] = 14;
    dictionary["fifteen"] = 15;
    dictionary["sixteen"] = 16;
    dictionary["seventeen"] = 17;
    dictionary["eighteen"] = 18;
    dictionary["nineteen"] = 19;
    dictionary["twenty"] = 20;
    dictionary["thirty"] = 30;
    dictionary["forty"] = 40;
    dictionary["fifty"] = 50;
    dictionary["sixty"] = 60;
    dictionary["seventy"] = 70;
    dictionary["eighty"] = 80;
    dictionary["ninety"] = 90;
    dictionary["hundred"] = 100;
    dictionary["thousand"] = 1000;
    dictionary["million"] = 1000000;
}
int main()
{
    dictionaryCreate();

    string text;

    while(getline(cin, text))
    {
        stringstream stream;

        stream = stringstream(text);
        string sampleText;

        long long tempValue = 0;
        long long amount = 0;
        bool signFlag = true;

        while(stream >> sampleText)
        {
            if(sampleText == "negative")
                signFlag = false;
            else if(sampleText == "hundred" ||
                    sampleText == "thousand" ||
                    sampleText == "million")
            {
                long long multiplier = dictionary[sampleText];
                long long rest = amount % multiplier;
                long long div = amount / multiplier;

                amount = (div + rest + tempValue) * multiplier;
                tempValue = 0;
            }
            else
            {
                tempValue += dictionary[sampleText];
            }
        }
        amount += tempValue;
        if(signFlag)
            cout << amount << endl;
        else
            cout << amount * (-1) << endl;
    }

    return 0;
}
