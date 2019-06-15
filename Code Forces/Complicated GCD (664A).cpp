#include<bits/stdc++.h>

int main()
{
	char number1[102];
	char number2[102];

	scanf("%s %s", number1, number2);

	if(strcmp(number1, number2) == 0)
		printf("%s\n", number1);
	else
		printf("%s\n", "1");


	return 0;
}