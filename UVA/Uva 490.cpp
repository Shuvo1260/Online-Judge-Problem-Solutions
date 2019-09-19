#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <string> stringDir;
    vector <int> sizeDir;
    string inputString;
    int maxSize = 0;

    while(getline(cin , inputString))
    {
        /// If there is no input the program will terminate
        if(!inputString.size())
            break;

        /// Storing the input Strings
        stringDir.push_back(inputString);
        sizeDir.push_back(inputString.size());

        /// Determining the maximum size of input strings
        if(inputString.size() > maxSize)
            maxSize = inputString.size();
    }

    int len = stringDir.size();

    /// Displaying each character from top to bottom and left to right
    for(int index = 0; index < maxSize; index++)
    {
        for(int dirIndex = len-1; dirIndex >= 0; dirIndex--)
        {
            if(index < sizeDir[dirIndex])
                cout << stringDir[dirIndex].at(index);
            else
                cout << " ";
        }
        cout << endl;
    }


    return 0;
}
