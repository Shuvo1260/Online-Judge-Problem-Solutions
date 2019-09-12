#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        char brackets[10000];

        scanf("%s", brackets);

        int len = strlen(brackets);

        stack < char > bracketStack;

        for(int index = 0; index < len; index++)
        {
            if(brackets[index] == '('
                || brackets[index] == '{'
                || brackets[index] == '[')
                {
                    /// Pushing entry brackets in the stack
                    bracketStack.push(brackets[index]);
                }
            else
            {
                if(!bracketStack.empty())
                {
                    /// Pop outing close brackets from stack
                    /// if the bracket is close bracket of stack top bracket
                    if(brackets[index] == ')' && bracketStack.top() == '(')
                        bracketStack.pop();
                    else if(brackets[index] == '}' && bracketStack.top() == '{')
                        bracketStack.pop();
                    else if(brackets[index] == ']' && bracketStack.top() == '[')
                        bracketStack.pop();
                    else
                        bracketStack.push(brackets[index]);
                }
                else
                    bracketStack.push(brackets[index]);
            }
        }

        if(bracketStack.empty())
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
