#include<cstdio>
#include<cstring>
#include<cstdlib>
int main()
{
    char first[10001];
    char second[10001];

    int alphabat[26] = {0};

    gets(first);
    gets(second);

    for(int index = 0; index < strlen(first); index++)
        alphabat[first[index] - 'a' ]++;

    for(int index = 0; index < strlen(second); index++)
        alphabat[second[index] - 'a' ]--;

    int answer = 0;
    for(int counter = 0; counter < 26; counter++)
        answer += abs(alphabat[counter]);
    printf("%d\n",answer);


    return 0;
}
