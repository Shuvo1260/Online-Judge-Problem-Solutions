#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(char data[100], int start, int end)
{
    int len = (start + end) / 2;
    for(int index = start; index <= len; index++,end-- )
    {
        if(data[index] != data[end])
            return false;
    }

    return true;
}

int main()
{
    char data[100];

    while(scanf("%s", data) == 1)
    {
        int len = strlen(data);

        map <char, bool> alphabet;
        int result = 0;

        for(int index = 0; index < len; index++)
        {
            alphabet[data[index]] = true;
        }

        map <char, bool> :: iterator it;

        for(it = alphabet.begin(); it != alphabet.end(); it++)
            result++;
        for(int counter = 1; counter < len; counter++)
        {
            char subchar[100];
            map < string, bool > str;
            for(int index = 0; index < len - counter; index++)
            {
                for(int mainIndex = index, subindex = 0; mainIndex <= index+counter; mainIndex++, subindex++)
                    subchar[subindex] = data[mainIndex];
                string substring(subchar);

                if(ispalindrome(data,index, index+counter) && !str[substring])
                {
                    result++;
                    str[substring] = true;
                }

            }
        }

        printf("The string '%s' contains %d palindromes.\n", data, result);
    }



    return 0;
}
