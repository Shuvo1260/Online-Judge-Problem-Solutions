#include<bits/stdc++.h>

using namespace std;


vector <int> nodes[110];
int visited[110];
stack <int> resultStack;

/// Output portion
void printResult(int n)
{
    int counter = 0;
    while(!resultStack.empty())
    {

        cout << resultStack.top()+1;
        resultStack.pop();
        if(counter == n-1)
            printf("\n");
        else
            printf(" ");
        counter++;
    }
}


/// Checking the adjacent nodes of current nodes
void topologicalSortUtil(int node)
{
    /// Current node marked as visited node
    visited[node] = true;

    int len = nodes[node].size();

    for(int index = 0; index < len; index++)
    {
        int adjNode = nodes[node][index];
        if(!visited[adjNode])
            topologicalSortUtil(adjNode);
    }

    /// If the current node doesn't left have any adjacent node
    /// then push in stack
    resultStack.push(node);
}


void topologicalSort(int n)
{
    /// Initializing all nodes as unvisited node
    for(int index = 0; index < n; index++)
        visited[index] = false;


    /// Checking each nodes
    for(int node = 0; node < n; node++)
    {
        if(!visited[node])
            topologicalSortUtil(node);
    }

    printResult(n);
}

int main()
{
    int n;
    int queryNumber;

    while(scanf("%d%d", &n, &queryNumber) == 2)
    {
        if(!n && !queryNumber)
            break;
        int from, to;
        for(int counter = 0; counter < queryNumber; counter++)
        {
            cin >> from >> to;
            nodes[from-1].push_back(to-1);
        }

        topologicalSort(n);

        for(int index = 0; index < n; index++)
        {
            nodes[index].clear();
        }
    }



    return 0;
}

