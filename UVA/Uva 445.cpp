#include<bits/stdc++.h>

using namespace std;


int main()
{
    string text;

    int counter = 0;

    while(getline(cin, text))
    {
        int len = text.size();
        int value = 0;
        for(int index = 0; index < len; index++)
        {
            /// Counting the value
            if(text[index] >= '0' && text[index] <= '9')
                value += text[index] - '0';
            else if(text[index] == 'b')
            {
                /// Printing spaces
                for(int tempInd = 0; tempInd < value ; tempInd++)
                    printf(" ");
                value = 0;
            }
            else if(text[index] == '!')
            {
                /// Printing new line
                printf("\n");
                value = 0;
            }
            else
            {
                /// Printing the character 1 to value
                for(int tempInd = 0; tempInd < value; tempInd++)
                    cout << text[index];
                    value = 0;
            }
        }


        printf("\n");
    }

    return 0;
}
