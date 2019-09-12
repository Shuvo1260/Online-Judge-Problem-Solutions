#include<bits/stdc++.h>

using namespace std;


int main()
{
    char text[1000001];

    while(scanf("%s", text) == 1)
    {
        int len = strlen(text);

        list <char> result;

        list <char> :: iterator it;

        it = result.begin();

        for(int index = 0; index < len; index++)
        {
            if(text[index] == '[')
            {
                /// Set the pointer at front of the texts
                it = result.begin();
            }
            else if(text[index] == ']')
            {
                /// Set the pointer at end of the texts
                it = result.end();
            }
            else
            {
                /// Inserting the values
                result.insert(it, text[index]);
            }
        }

        for(it = result.begin(); it != result.end(); it++)
            printf("%c", *it);
        printf("\n");
    }

    return 0;
}

/// I have got TLE on it
//int main()
//{
//    string text;
//
//    while(cin >> text)
//    {
//        int len = text.size();
//
//        string result;
//        string temp;
//        bool flag = true;
//
//        for(int index = 0; index < len; index++)
//        {
//            if(text[index] == '[')
//            {
//                flag = false;
//                result = result + temp;
//                temp.clear();
//                for(index = index+1; index < len; index++)
//                {
//                    if(text[index] == '[' || text[index] == ']')
//                    {
//                        result = temp + result;
//                        temp.clear();
//                        index--;
//                        break;
//                    }
//                    else
//                    {
//                        temp += text[index];
//                    }
//
//                }
//            }
//            else if(text[index] == ']')
//            {
//                result = result + temp;
//                temp.clear();
//                flag = true;
//                for(index = index+1; index < len; index++)
//                {
//                    if(text[index] == '[' || text[index] == ']')
//                    {
//                        result = result + temp;
//                        temp.clear();
//                        index--;
//                        break;
//                    }
//                    else
//                    {
//                        temp += text[index];
//                    }
//
//                }
//            }
//            else
//            {
//                temp += text[index];
//            }
//        }
//
//        if(flag)
//            cout << result+temp << endl;
//        else
//            cout << temp+result<< endl;
//    }
//
//    return 0;
//}
