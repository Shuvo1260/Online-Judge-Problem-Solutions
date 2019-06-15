#include<cstdio>
#include<cstring>

int bending(int bend, char wire[3])
{
    if(bend == 0 && !strcmp(wire, "+y"))
        return 1;
    else if(bend == 0 && !strcmp(wire, "-y"))
        return 4;
    else if(bend == 0 && !strcmp(wire, "+z"))
        return 2;
    else if(bend == 0 && !strcmp(wire, "-z"))
        return 5;

    else if(bend == 1 && !strcmp(wire, "+y"))
        return 3;
    else if(bend == 1 && !strcmp(wire, "-y"))
        return 0;
    else if(bend == 1 && !strcmp(wire, "+z"))
        return 1;
    else if(bend == 1 && !strcmp(wire, "-z"))
        return 1;

    else if(bend == 2 && !strcmp(wire, "+y"))
        return 2;
    else if(bend == 2 && !strcmp(wire, "-y"))
        return 2;
    else if(bend == 2 && !strcmp(wire, "+z"))
        return 3;
    else if(bend == 2 && !strcmp(wire, "-z"))
        return 0;

    else if(bend == 3 && !strcmp(wire, "+y"))
        return 4;
    else if(bend == 3 && !strcmp(wire, "-y"))
        return 1;
    else if(bend == 3 && !strcmp(wire, "+z"))
        return 5;
    else if(bend == 3 && !strcmp(wire, "-z"))
        return 2;

    else if(bend == 4 && !strcmp(wire, "+y"))
        return 0;
    else if(bend == 4 && !strcmp(wire, "-y"))
        return 3;
    else if(bend == 4 && !strcmp(wire, "+z"))
        return 4;
    else if(bend == 4 && !strcmp(wire, "-z"))
        return 4;

    else if(bend == 5 && !strcmp(wire, "+y"))
        return 5;
    else if(bend == 5 && !strcmp(wire, "-y"))
        return 5;
    else if(bend == 5 && !strcmp(wire, "+z"))
        return 0;
    else if(bend == 5 && !strcmp(wire, "-z"))
        return 3;
}

void display(int bend)
{
    if(bend == 0)
        printf("+x\n");
    else if(bend == 1)
        printf("+y\n");
    else if(bend == 2)
        printf("+z\n");
    else if(bend == 3)
        printf("-x\n");
    else if(bend == 4)
        printf("-y\n");
    else if(bend == 5)
        printf("-z\n");
}
int main()
{
    int length;

    while(scanf("%d", &length) == 1 && length)
    {
        getchar();
        char wire[3];
        int bend = 0;

        for(int counter = 0; counter < length-1; counter++)
        {
            scanf("%s", wire);

            if(strcmp(wire,"No"))
                bend = bending(bend, wire);
        }

        display(bend);
    }


    return 0;
}
