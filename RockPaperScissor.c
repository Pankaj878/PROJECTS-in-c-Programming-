#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>

static int pc = 0;
static int user = 0;
char name[20];
int a, b, c, d;

void main()
{
    int i;
    printf("     *******Welcome to the Gaming World********\n");
    printf("Your Good name Please:");
    scanf("%[^\n]s", &name);
    for (i = 0; i < sizeof name / sizeof name[0]; i++)
    {
        name[i] = towupper(name[i]);
    }

    for (int f = 1; f <= 10000; f++)
        for (int g = 1; g <= 10000; g++)
        {
        }
    printf("Hey,%s\n\n", name);
    for (int f = 1; f <= 20000; f++)
        for (int g = 1; g <= 20000; g++)
        {
        }
    printf("Get ready for Fun\n\n");
    for (int f = 1; f <= 25767; f++)
        for (int g = 1; g <= 25767; g++)
        {
        }
    printf("Game is loading please wait");
    for (i = 0; i < 3; i++)
    {
        printf("Loading............\n\n");
        Sleep(500);
        system("cls");
        Sleep(500);
    }
    printf("Read all instruction carefully:\n\n             *Press 1 for choosing Rock\n             *Press 2 for choosing Paper\n             *Press 3 for choosing Scissor\n\n");
    printf("\nPress any key to PLAY");
    getch();
    system("cls");

    srand(time(NULL));
    for (int a = 1; a < 4; a++)
    {
        printf("--------------------------------LEVEL-[%d]------------------------------\n\n", a);
        printf("%s's Turn\n1.Rock\n2.Paper\n3.Scissor\n              Your choice=", name);
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("                        (Rock)\n\n");
            break;
        case 2:
            printf("                        (Paper)\n\n");
            break;
        case 3:
            printf("                        (Scissor)\n\n");
            break;
        }
        printf("COMPUTER's Turn\n1.Rock\n2.Paper\n3.Scissor\n               COMPUTER Choose=");
        d = rand() % 3;
        switch (d)
        {
        case 0:
            printf("Rock\n\n");
            break;
        case 1:
            printf("Paper\n\n");
            break;
        case 2:
            printf("Scissor\n\n");
            break;
        }
        if (d == 0 && b == 3 || d == 1 && b == 1 || d == 2 && b == 2)
        {
            pc++;
            printf("        *COMPUTER Point=(%d)*       *%s Point=(%d)*\n\n", pc, name, user);
        }
        else if (b == 1 && d == 2 || b == 2 && d == 0 || b == 3 && d == 1)
        {

            user++;
            printf("         *%s Point=(%d)*      *COMPUTER Point=(%d)*\n\n", name, user, pc);
        }
        else
        {

            printf("                   ** MATCH DRAW **\n\n            * %s Point=(%d)*      *COMPUTER Point=(%d)*\n\n", name, user, pc);
        }
        if (a < 3)
        {
            printf("Press Any key for Next Level");
            getch();
        }

        else
        {
            printf("Press Any key for Final Result");
            getch();
        }

        system("cls");

        if (a == 3)
        {
            printf("                      FINAL Score\n\n %s Point=[ %d ]\n COMPUTER Point=[ %d ]\n\n", name, user, pc);
        }
    }

    printf("\n\n                  ** GAME OVER **");

    if (pc > user)
        printf("\n\n                  *** COMPUTER WIN ***\n\n");
    else if (pc < user)
        printf("\n\n                  *** %s WIN ***\n\n", name);
    else
        printf("\n\n                  *** MATCH DRAW ***\n\n");
}
