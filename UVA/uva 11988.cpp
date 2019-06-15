#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

//int devide(char line[], int number, int len)
//{
//    int index;
//    for(index = number; index <=len; index++)
//    {
//        if(line[index] == '[' || index == len)
//        {
//            int temp = devide(line,index+1,len);
//            for(int temp_index = number; temp_index < index; temp_index++)
//                printf("%c",line[temp_index]);
//            return temp;
//        }
//        else if(line[index] == ']')
//        {
//            for(int temp_index = number; temp_index < index; temp_index++)
//                printf("%c",line[temp_index]);
//            return index+1;
//        }
//    }cout << "shovo" << endl;
//}

int main()
{

    char line[100000];
    int len;

    while(scanf(" %[^\n]", line))
    {
        len = strlen(line);
        int start[len] = {0};
        int End[len] = {0};
        int counter = 0;
        int counter= 0;

        for(int index = 0; index < len; index++)
        {
            if(line[index] == '[' || index == 0)
            {
                start[counter++] = index;
            }
        }


        printf("\n");
    }

    return 0;
}
