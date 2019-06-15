#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int test = 1;
    while(true)
    {
        char input[30];
        scanf("%s",input);

        if(strcmp(input,"#") == 0)
            break;
        else if(strcmp(input, "HELLO") == 0)
            printf("Case %d: ENGLISH\n",test);
        else if(strcmp(input, "HOLA") == 0)
            printf("Case %d: SPANISH\n",test);
        else if(strcmp(input, "HALLO") == 0)
            printf("Case %d: GERMAN\n",test);
        else if(strcmp(input, "BONJOUR") == 0)
            printf("Case %d: FRENCH\n",test);
        else if(strcmp(input, "CIAO") == 0)
            printf("Case %d: ITALIAN\n",test);
        else if(strcmp(input, "ZDRAVSTVUJTE") == 0)
            printf("Case %d: RUSSIAN\n",test);
        else
            printf("Case %d: UNKNOWN\n",test);
            test++;
    }


    return 0;
}
