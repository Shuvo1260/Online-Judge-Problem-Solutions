#include<iostream>
using namespace std;

int main()
{
    int test;
    for(int t = 1;  ; t++)
    {
        int n;
        cin>> n;
        if(n == 0)
            break;
        else
        {
            int emoogle;
            int emoogle_book = 0;
            int emoogle_treat = 0;
            for(int index = 0; index < n; index++)
            {
                cin >> emoogle;
                if(emoogle == 0)
                    emoogle_treat++;
                else if( emoogle >=1 && emoogle <= 99)
                    emoogle_book++;
            }
            cout << "Case " <<t <<": " << emoogle_book - emoogle_treat <<endl;

        }


    }


    return 0;
}

