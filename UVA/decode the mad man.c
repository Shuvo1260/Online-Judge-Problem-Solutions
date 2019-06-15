#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(a=='\\')
            printf("[");
        else if(a==']')
            printf("p");
        else if(a=='[')
            printf("o");
        else if(a=='p'||a=='P')
            printf("i");
        else if(a=='o'||a=='O')
            printf("u");
        else if(a=='i'||a=='I')
            printf("y");
        else if(a=='u'||a=='U')
            printf("t");
        else if(a=='y'||a=='Y')
            printf("r");
        else if(a=='t'||a=='T')
            printf("e");
        else if(a=='r'||a=='R')
            printf("w");
        else if(a=='e'||a=='E')
            printf("q");
        else if(a=='\'')
            printf("l");
        else if(a==';')
            printf("k");
        else if(a=='l'||a=='L')
            printf("j");
        else if(a=='k'||a=='K')
            printf("h");
        else if(a=='j'||a=='J')
            printf("g");
        else if(a=='h'||a=='H')
            printf("f");
        else if(a=='g'||a=='G')
            printf("d");
        else if(a=='f'||a=='F')
            printf("s");
        else if(a=='d'||a=='D')
            printf("a");
        else if(a=='/')
            printf(",");
        else if(a=='.')
            printf("m");
        else if(a==',')
            printf("n");
        else if(a=='m'||a=='M')
            printf("b");
        else if(a=='n'||a=='N')
            printf("v");
        else if(a=='b'||a=='B')
            printf("c");
        else if(a=='v'||a=='V')
            printf("x");
        else if(a=='c'||a=='C')
            printf("z");
        else if(a==' ')
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}
