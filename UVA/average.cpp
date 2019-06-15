#include<cstdio>
#include<cmath>
int main()
{
	int test;
	int n;
	int grade[n];
	int average;
	while(scanf("%d",&test) == 1)
	{
		for(int loop = 0; loop < test; loop++)
		{
			scanf("%d", &n);
			int sum = 0;
			int counter = 0;
			for(int index = 0; index < n ; index++)
			{
				scanf("%d",&grade[index]);
				sum += grade[index];
			}
			average =(int)(sum / n);
			for(int index = 0; index < n; index++)
			{printf("%d\n",index);
				if(average < grade[index])
					counter++;
			}printf("%d\n",counter);
			printf("%.3lf%\n", (double)(counter *100)/n);
		}
	}
	return 0;
}

