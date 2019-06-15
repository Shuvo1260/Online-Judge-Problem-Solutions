#include<stdio.h>
#include<string.h>
int main()
{
    char text;
    while(scanf("%c",&text)!=EOF)
    {
            if(text=='\\')
                printf("]");
            else if(text==']')
                printf("[");
            else if(text=='[')
                printf("P");
            else if(text=='P')
                printf("O");
            else if(text=='O')
                printf("I");
            else if(text=='I')
                printf("U");
            else if(text=='U')
                printf("Y");
            else if(text=='Y')
                printf("T");
            else if(text=='T')
                printf("R");
            else if(text=='R')
                printf("E");
            else if(text=='E')
                printf("W");
            else if(text=='W')
                printf("Q");
            else if(text=='\'')
                printf(";");
            else if(text==';')
                printf("L");
            else if(text=='L')
                printf("K");
            else if(text=='K')
                printf("J");
            else if(text=='J')
                printf("H");
            else if(text=='H')
                printf("G");
            else if(text=='G')
                printf("F");
            else if(text=='F')
                printf("D");
            else if(text=='D')
                printf("S");
            else if(text=='S')
                printf("A");
            else if(text=='/')
                printf(".");
            else if(text=='.')
                printf(",");
            else if(text==',')
                printf("M");
            else if(text=='M')
                printf("N");
            else if(text=='N')
                printf("B");
            else if(text=='B')
                printf("V");
            else if(text=='V')
                printf("C");
            else if(text=='C')
                printf("X");
            else if(text=='X')
                printf("Z");
            else if(text=='=')
                printf("-");
            else if(text=='-')
                printf("0");
            else if(text=='0')
                printf("9");
            else if(text=='9')
                printf("8");
            else if(text=='8')
                printf("7");
            else if(text=='7')
                printf("6");
            else if(text=='6')
                printf("5");
            else if(text=='5')
                printf("4");
            else if(text=='4')
                printf("3");
            else if(text=='3')
                printf("2");
            else if(text=='2')
                printf("1");
            else if(text=='1')
                printf("`");
            else if(text==' ')
                printf(" ");
            else
                printf("\n");


    }
    return 0;
}
