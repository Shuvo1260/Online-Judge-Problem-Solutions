#include<bits/stdc++.h>

using namespace std;

int main()
{
    char id[60];

    while(true)
    {
        gets(id);
        if(strcmp(id, "#") == 0)
            break;

        if(!next_permutation(id, id + strlen(id)))
        {
            printf("No Successor\n");
        }
        else
        {
            puts(id);
        }
    }


    return 0;
}
