#include<bits/stdc++.h>

using namespace std;

void display(vector <int> board[26], int n)
{
    vector <int> :: iterator it;
    for(int index = 0; index < n; index++)
    {
        cout << index << " :";
        for(it = board[index].begin(); it != board[index].end(); it++)
        {
            cout << " " << *it;
        }
        cout << endl;
        board[index].clear();
    }
}

int main()
{

    int n;

    while(scanf("%d", &n) == 1)
    {
        int a, b;
        vector <int> board[26];
        for(int row = 0; row < n; row++)
        {
            board[row].push_back(row);
        }
//        for(int row = 0; row < n; row++)
//        {
//            for(int column = 0; column < board[row].size(); column++)
//            {
//                cout << board[row][column] << " ";
//            }cout << endl;
//        }

        vector <int> :: iterator it;

        string command, direction;

        while(true)
        {
            cin >> command;
            if(command == "quit")
            {
                display(board, n);
                break;
            }
            else
            {
                scanf("%d", &a);
                getchar();
                cin >> direction;
                scanf("%d", &b);
                getchar();
                a--;
                b--;
                vector <int> :: iterator location;

                if(command == "move")
                {
                    if(direction == "over")
                    {
                        cout << "over" << endl;
                    }
                    else
                    {
//                        for(int index = 0; index < n; index++)
//                        {
//                            bool flag = false;
//                            for(it = board[index].begin(); it != board[index].end(); it++)
//                            {
//                                if(*it == b)
//                                {
//                                    cout << a << " " << b <<  " " << *it <<endl;
//                                    flag = true;
//                                    for(it++; it!= board[index].end(); it++)
//                                    {
//                                        board[*it].clear();
//                                        board[*it].push_back(*it);
//                                    }
//                                    board[b].clear();
//                                    board[b].push_back(b);
//                                    break;
//                                }
//                            }
//                            if(flag)
//                                break;
//                        }

                        for(int index = 0; index < n; index++)
                        {
                            bool flag = false;
                            for(it = board[index].begin(); it != board[index].end(); it++)
                            {
                                if(*it == a)
                                {
                                    flag = true;
                                    for(it++; it!= board[index].end(); it++)
                                    {
                                        board[*it].clear();
                                        board[*it].push_back(*it);
                                    }
                                    board[b].push_back(a);
                                    board[a].clear();
                                    break;
                                }
                            }
                            if(flag)
                                break;
                        }display(board,n);

                    }
                }
                else if(command == "pile")
                {
                    if(direction == "over")
                    {
                        cout << "over" << endl;
                    }
                    else
                    {
                        cout << "onto" << endl;
                    }
                }
            }
        }

    }


    return 0;
}
