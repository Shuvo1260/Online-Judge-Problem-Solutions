#include<cstdio>
#include<cstring>

int main()
{
    int test;
    char line[101];
    int alphabet_key[27] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
    scanf("%d", &test);
    getchar();

    for(int Case = 1; Case <= test; Case++)
    {

        gets(line);
        int len = strlen(line);
        int sum = 0;

        for(int index = 0; index < len; index++)
        {
            if(line[index] == ' ')
                sum++;
            else
            {
                sum+= alphabet_key[line[index] - 97];
            }
        }

        printf("Case #%d: %d\n", Case, sum);

    }



    return 0;
}
