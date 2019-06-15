#include<cstdio>

int main()
{
    long long int n;
    long long int m;

    while(scanf("%lld%lld", &n, &m) == 2 && n && m)
    {
        long long int n_cd[n];
        long long int m_cd[m];

        for(int index = 0; index < n; index++)
            scanf("%lld", &n_cd[index]);

        for(int index = 0; index < m; index++)
            scanf("%lld", &m_cd[index]);

        int n_index = 0;
        int m_index = 0;

        int counter = 0;

        while(n_index < n && m_index < m)
        {
            if(n_cd[n_index] == m_cd[m_index])
            {
                counter++;
                n_index++;
                m_index++;
            }
            else if(n_cd[n_index] < m_cd[m_index])
                n_index++;
            else
                m_index++;
        }

        printf("%d\n", counter);

    }

    return 0;
}
