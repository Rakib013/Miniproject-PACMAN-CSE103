#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define R 30
#define C 100
int score, n, m, k = 0;
bool gameOver = false;
enum eDirections
{
    Stop = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
enum eDirections dir;

void game();
void input();
void Naba();
void Nur();
void Rakib();

void input()
{
    dir = Stop;
    char ch;
    scanf("%c", &ch);
    if (ch == 'a')
    {
        dir = LEFT;
    }
    else if (ch == 'd')
    {
        dir = RIGHT;
    }
    else if (ch == 'w')
    {
        dir = UP;
    }
    else if (ch == 's')
    {
        dir = DOWN;
    }
    else if (ch == 'x')
    {
        gameOver = true;
    }
}

void intro()
{
    system("cls");
    printf("\n\n\n");
    char arr[][80] = {
        {"\t\t             ::============================================================::"},
        {"\t\t           :: ::        Welcome To The Gratest Game Platform Ever        ::::"},
        {"\t\t         ::   ::                       PACMAN                           :: ::"},
        {"\t\t        ::============================================================::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::               01. PLAY                               ::   ::"},
        {"\t\t        ::    ::               02. HIGH SCORE                         ::   ::"},
        {"\t\t        ::    ::               03. INSTRUCTION                        ::   ::"},
        {"\t\t        ::    ::               04. ABOUT OF PACMAN                    ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::======================================================::   ::"},
        {"\t\t        ::   ::                                                      ::   ::"},
        {"\t\t        ::  ::======================================================::  ::"},
        {"\t\t        ::                                                             ::"},
        {"\t\t        ::===========================================================::"},

    };
    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}

void play_intro(char *name)
{
    system("cls");
    printf("\n\n\n");
    char arr[][80] = {
        {"\t\t             ================================================================"},
        {"\t\t           :: ::                     HI                                  ::::"},
        {"\t\t         ::   ::             PLEASE SELECT YOUR CHOICES                 :: ::"},
        {"\t\t        ::============================================================::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::               01. EASY                               ::   ::"},
        {"\t\t        ::    ::               02. MEDIUM                             ::   ::"},
        {"\t\t        ::    ::               03. HARD                               ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::                                                      ::   ::"},
        {"\t\t        ::    ::======================================================::   ::"},
        {"\t\t        ::   ::                                                      ::   ::"},
        {"\t\t        ::  ::======================================================::  ::"},
        {"\t\t        ::                                                             ::"},
        {"\t\t        ::============================================================::"},

    };

    int n = 43;
    while (*name != '\0')
    {
        arr[1][n] = *name;
        name++;
        n++;
    }

    arr[1][n] = '!';

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}

void instruction()
{
    system("cls");
    char arr[][150] = {
        {"\t______________________________________________________________        _________________________________________________________________"},
        {"\t|              Easy Mode Game Instruction                    |        |                  Medium Mode Game Instruction                 |"},
        {"\t|                                                            |        |                                                               |"},
        {"\t|                                                            |        |    YOU HAVE TO CONTROLL PACMAN WITH YOUR KEYBOARD. HERE IS 5  |"},
        {"\t| YOU HAVE TO CONTROLL PACMAN WITH YOUR KEYBOARD. HERE IS 5  |        |      TYPES OF KEYBOARD INSTRUCTION AS LIKE IF YOU PRESS 'W'   |"},
        {"\t|   TYPES OF KEYBOARD INSTRUCTION AS LIKE IF YOU PRESS 'W'   |        |   THEN PACMAN WILL GO UP,IF YOU PRESS 'S' PACMAN WILL GO DOWN |"},
        {"\t|THEN PACMAN WILL GO UP,IF YOU PRESS 'S' PACMAN WILL GO DOWN |        |    THEN IF YOU PRESS 'D' THE PACMAN WILL GO LEFT THEN IF YOU  |"},
        {"\t| THEN IF YOU PRESS 'D' THE PACMAN WILL GO LEFT THEN IF YOU  |        |      PRESS 'A' THE PACMAN WILL GO RIGHT. AND THATS HOW OUR    |"},
        {"\t|   PRESS 'A' THE PACMAN WILL GO RIGHT. AND THATS HOW OUR    |        |                 PACMAN CONTROLL BY GAME PLAYER                |"},
        {"\t|              PACMAN CONTROLL BY GAME PLAYER                |        |                                                               |"},
        {"\t|                                                            |        |                                                               |"},
        {"\t|                                                            |        |                                                               |"},
        {"\t|                                                            |        |                                                               |"},
        {"\t| HERE IS 3 TYPES OF FOOD FOR PACMAN FIRST ONE IS '*' SECOND |        |   HERE IS 3 TYPES OF FOOD FOR PACMAN FIRST ONE IS '*' SECOND  |"},
        {"\t| ONE IS '&' THIRD ONE IS '$'. IF YOU EAT '*' THEN YOUR SCORE|        |   ONE IS '&' THIRD ONE IS '$'. IF YOU EAT '*' THEN YOUR SCORE |"},
        {"\t|WILL INCREASE 2 IF YOU EAT '&' THEN YOUR SCORE WILL INCREASE|        |  WILL INCREASE 5 IF YOU EAT '&' THEN YOUR SCORE WILL INCREASE |"},
        {"\t|     5 IF YOU EAT '$' THEN YOUR SCORE WILL INCREASE 50.     |        |       10 IF YOU EAT '$' THEN YOUR SCORE WILL INCREASE 50.     |"},
        {"\t|____________________________________________________________|        |_______________________________________________________________|"},

        {"\t\t\t\t\t______________________________________________________________   "},
        {"\t\t\t\t\t|                Hard Mode Game Instruction                  |   "},
        {"\t\t\t\t\t|                                                            |   "},
        {"\t\t\t\t\t| YOU HAVE TO CONTROLL PACMAN WITH YOUR KEYBOARD. HERE IS 5  |   "},
        {"\t\t\t\t\t|  TYPES OF KEYBOARD INSTRUCTION AS LIKE IF YOU PRESS 'W'    |   "},
        {"\t\t\t\t\t|THEN PACMAN WILL GO UP,IF YOU PRESS 'S' PACMAN WILL GO DOWN |   "},
        {"\t\t\t\t\t| THEN IF YOU PRESS 'D' THE PACMAN WILL GO LEFT THEN IF YOU  |   "},
        {"\t\t\t\t\t|   PRESS 'A' THE PACMAN WILL GO RIGHT. AND THATS HOW OUR    |   "},
        {"\t\t\t\t\t|            PACMAN CONTROLL BY GAME PLAYER                  |   "},
        {"\t\t\t\t\t|                                                            |   "},
        {"\t\t\t\t\t|                                                            |   "},
        {"\t\t\t\t\t|                                                            |   "},
        {"\t\t\t\t\t| HERE IS 3 TYPES OF FOOD FOR PACMAN FIRST ONE IS '*' SECOND |   "},
        {"\t\t\t\t\t| ONE IS '&' THIRD ONE IS '$'. IF YOU EAT '*' THEN YOUR SCORE|   "},
        {"\t\t\t\t\t|WILL INCREASE 2 IF YOU EAT '&' THEN YOUR SCORE WILL INCREASE|   "},
        {"\t\t\t\t\t|     5 IF YOU EAT '$' THEN YOUR SCORE WILL INCREASE 50.     |   "},
        {"\t\t\t\t\t|                                                            |   "},
        {"\t\t\t\t\t|____________________________________________________________|   "}};
    for (int i = 0; i < 36; i++)
    {
        for (int j = 0; j < 150; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\t\t\t\t\t\t\tEnter 0 To Go Back: ");
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        system("cls");
        game();
    }
}

void about()
{
    system("cls");
    printf("\n\n");
    char arr[][80] = {
        {"\t\t\t                   ____________________________________                "},
        {"\t\t\t                   |   ABOUT OF THE GAME DEVELOPER    |                "},
        {"\t\t\t       ____________|__________________________________|________________"},
        {"\t\t\t     * |           |                                  |              * |"},
        {"\t\t\t    *  |           |              PACMAN              |            *   |"},
        {"\t\t\t   *___|___________|__________________________________|__________*     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |   |                    MD. RAKIBUL ISLAM                    |     |"},
        {"\t\t\t   |   |                  EWU-ID: 2021-3-60-030                  |     |"},
        {"\t\t\t   |   |                 DEVELOPED: GAME LOOP AND                |     |"},
        {"\t\t\t   |   |               BASE LOGICAL IMPLEMENTATION               |     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |   |    JANNATUL FERDOUS NABA          NUR JAHAN AKTER       |     |"},
        {"\t\t\t   |   |    EWU-ID: 2021-3-60-041          EWU-ID: 2021-3-60-054 |     |"},
        {"\t\t\t   |   |    DEVELOPED: IMPLEMENT A         DEVELOPED A FUNCTION  |     |"},
        {"\t\t\t   |   |    FUNCTION WHICH CALLED IS       WHICH CALLED IS NUR   |     |"},
        {"\t\t\t   |   |    NABA AND MERGED IT WITH        AND MERGED IT WITH    |     |"},
        {"\t\t\t   |   |    MAIN GAME FUNCTION             MAIN GAME FUNCTION    |     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |   |               USED LANGUAGE OF THIS GAME                |     |"},
        {"\t\t\t   |   |                 C PROGRAMMING LANGUAGE                  |     |"},
        {"\t\t\t   |   |                                                         |     |"},
        {"\t\t\t   |___|_________________________________________________________|     |"},
        {"\t\t\t   *   |                                                           *   |"},
        {"\t\t\t    *  |                                                            *  |"},
        {"\t\t\t     * |                                                             * |"},
        {"\t\t\t       *_______________________________________________________________|"}

    };

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\t\t\t\t\t\tEnter 0 To Go Back: ");
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        system("cls");
        game();
    }
}

void HighScore()
{
    system("cls");
    printf("\n\t\t\t\t\t\t|=====================================================|");
    printf("\n\t\t\t\t\t\t\tWhich Mode High Score You Want to see?\n");
    printf("\t\t\t\t\t\t|=====================================================|\n");
    printf("\t\t\t\t\t\t\t\t01. Easy Mode High Score.\n");
    printf("\t\t\t\t\t\t\t\t02. Medium Mode High Score.\n");
    printf("\t\t\t\t\t\t\t\t03. Hard Mode High Score.\n");
    printf("\t\t\t\t\t\t|=====================================================|\n");
    printf("\n\t\t\t\t\t\tEnter Your Choice: ");
    int choic;
    scanf("%d", &choic);
    if (choic == 1)
    {
        FILE *f1;
        f1 = fopen("easy_score.txt", "r");
        if (f1 == NULL)
        {
            printf("\n\t\t\t\t\t\t|======================================================");
            printf("\n\t\t\t\t\t\t\tNo High Score Yet\n");
            printf("\t\t\t\t\t\t|======================================================\n");
        }
        else
        {
            system("cls");
            char p_name[200];
            while (!feof(f1))
            {
                fscanf(f1, "%s %d", p_name, &score);
            }
            fclose(f1);
            printf("\n\t\t\t\t\t\t|=====================================================|");
            printf("\n\t\t\t\t\t\t\t\tEasy Mode High Score.\n");
            printf("\t\t\t\t\t\t|=====================================================|\n");
            printf("\t\t\t\t\t\tPlayer Name                        Score\n");
            printf("\t\t\t\t\t\t%s\t\t\t\t   %d\n", p_name, score);
            printf("\t\t\t\t\t\t|=====================================================|\n");
        }
    }
    else if (choic == 2)
    {
        FILE *f1;
        f1 = fopen("medium_score.txt", "r");
        if (f1 == NULL)
        {
            printf("\n\t\t\t\t\t\t|=====================================================|");
            printf("\n\t\t\t\t\t\t\tNo High Score Yet.\n");
            printf("\t\t\t\t\t\t|=====================================================|\n");
        }
        else
        {
            system("cls");
            char p_name[200];
            while (!feof(f1))
            {
                fscanf(f1, "%s %d", p_name, &score);
            }
            fclose(f1);
            printf("\n\t\t\t\t\t\t|=====================================================|");
            printf("\n\t\t\t\t\t\t\t\tMedium Mode High Score.\n");
            printf("\t\t\t\t\t\t|=====================================================|\n");
            printf("\t\t\t\t\t\t Player Name                      Score\n");
            printf("\t\t\t\t\t\t %s\t\t\t\t   %d\n", p_name, score);
            printf("\t\t\t\t\t\t|=====================================================|\n");
        }
    }
    else if (choic == 3)
    {
        FILE *f1;
        f1 = fopen("hard_score.txt", "r");
        if (f1 == NULL)
        {
            printf("\n\t\t\t\t\t\t|=====================================================|");
            printf("\n\t\t\t\t\t\t\tNo High Score Yet.\n");
            printf("\t\t\t\t\t\t|=====================================================|\n");
        }
        else
        {
            system("cls");
            char p_name[200];
            while (!feof(f1))
            {
                fscanf(f1, "%s %d", p_name, &score);
            }
            fclose(f1);
            printf("\n\t\t\t\t\t\t|=====================================================|");
            printf("\n\t\t\t\t\t\t\t\tHard Mode High Score.\n");
            printf("\t\t\t\t\t\t|=====================================================|\n");
            printf("\t\t\t\t\t\t Player Name                      Score\n");
            printf("\t\t\t\t\t\t %s\t\t\t\t   %d\n", p_name, score);
            printf("\t\t\t\t\t\t|=====================================================|\n");
        }
    }
    printf("\n\t\t\t\t\t\tEnter 0 To Go Back High-Score Menu");
    printf("\n\t\t\t\t\t\tEnter 1 To Go Back Main Menu\n\t\t\t\t\t\t:')");
    int choice;
    scanf("%d", &choice);
    if (choice == 0)
    {
        system("cls");
        HighScore();
    }
    else if (choice == 1)
    {
        system("cls");
        game();
    }
}

void game()
{
    srand(time(NULL));
    char player_name[200];
    int choice, mode, score = 0;
    intro();
    printf("\n\n\t\t\tEnter Your Choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\tEnter Your Name: ");
        scanf("%s", player_name);
        play_intro(player_name);
        printf("\n\n\n\t\t\tWhich Type Of Game You Wanna Play: ");
        scanf("%d", &mode);
        if (mode == 1)
        {
            Naba(player_name);
        }
        else if (mode == 2)
        {
            Nur(player_name);
        }
        else if (mode == 3)
        {
            Rakib(player_name);
        }
    }
    else if (choice == 2)
    {
        HighScore();
    }
    else if (choice == 3)
    {
        instruction();
    }
    else if (choice == 4)
    {
        about();
    }
}

int main()
{
    game();
    return 0;
}

// <--------------- Naba Game Loop ---------------------->
void NB_setup()
{
    system("cls");
    gameOver = false;
    n = 4;
    m = 5;
    score = 0;
}

void NB_draw(char arr[R][C])
{
    printf("\n\n\t\t\tPRESS X TO QUIT");
    printf("\t\t\t\t\t\t\t\t\t    SCORE: %d\n", score);
    printf("\t\t\t");
    arr[n][m] = 'X';
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n\t\t\t");
    }
}

void NB_logic(char arr[R][C])
{
    switch (dir)
    {
    case LEFT:
        m -= 1;
        arr[n][m + 1] = ' ';
        break;
    case RIGHT:
        m += 1;
        arr[n][m - 1] = ' ';
        break;
    case UP:
        n -= 1;
        arr[n + 1][m] = ' ';
        break;
    case DOWN:
        n += 1;
        arr[n - 1][m] = ' ';
        break;
    default:
        break;
    }
    if (arr[n][m] == '*')
    {
        score += 2;
    }
    else if (arr[n][m] == '$')
    {
        score += 50;
    }
    if (arr[n][m] == '=' || arr[n][m] == '|' || arr[n][m] == '-' || arr[n][m] == '#' || arr[n][m] == 'x' || arr[n][m] == '_')
    {
        gameOver = true;
    }
}

void Naba(char name[20])
{
    char arr[R][C] = {
        {"___________________________________________|________________________________________________"},
        {"| * * * * * * * * * * * * * * * * * * * *  |  * * * * * * * * * * * * * * * * * * * * *  * |"},
        {"| *                                        |                                             * |"},
        {"| *                            * * * * *   |                         * * * * * * *       * |"},
        {"| *                            * * * * *   |                         * * * * * * *       * |"},
        {"| *                            * * * * *   |                         * * * * * * *       * |"},
        {"| *                                        |                                             * |"},
        {"| *                    **##***--------------------------------**##**                     * |"},
        {"| *                    |   x               x               x       |                     * |"},
        {"| *    # # # # #       |                                           |      # # # # #      * |"},
        {"| *    #       #       |              * * * * * * *                |      #       #      * |"},
        {"| *    #  $ $  #       |              * * * * * * *                |      #  $ $  #      * |"},
        {"| *    #       #       |              * # # # # # *                |      #       #      * |"},
        {"| *    # # # # #       |   x          * # # $ # # *        x       |      # # # # #      * |"},
        {"|----------------------|              * # # # # # *                |-----------------------|"},
        {"| *                    |              * * * * * * *                |                     * |"},
        {"| *                    |              * * * * * * *                |                     * |"},
        {"| *                    |                                           |                     * |"},
        {"| *                    |   x               x               x       |                     * |"},
        {"| *                    |                                           |                     * |"},
        {"| *                    ***#**_______________________________**###***                     * |"},
        {"| *                                        |                                             * |"},
        {"| *   # # # # #                            |                             # # # # #       * |"},
        {"| *   #       #                            |                             #       #       * |"},
        {"| *   #  $ $  #                            |                             #  $ $  #       * |"},
        {"| *   #       #                            |                             #       #       * |"},
        {"| *   # # # # #                            |                             # # # # #       * |"},
        {"| *                                        |                                             * |"},
        {"| * * * * * * * * * * * * * * * * * * * *  | * * * * * * * * * * * * * * * * * * * * * * * |"},
        {"|__________________________________________|_______________________________________________|"}};
    NB_setup();
    while (!gameOver)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tEasy Mode\n");
        NB_draw(arr);
        input();
        NB_logic(arr);
        k++;
    }

    FILE *f;
    int highScore;
    char p_name[200];
    f = fopen("easy_score.txt", "r");
    if (f == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {
        fscanf(f, "%s %d", p_name, &highScore);
        if (score > highScore)
        {
            fclose(f);
            f = fopen("easy_score.txt", "w");
            fprintf(f, "%s %d", name, score);
            fclose(f);
        }
        else
        {
            fclose(f);
        }
    }

    system("cls");
    printf("\t\t\t                   ____________________________________                \n");
    printf("\t\t\t                   |             PACMAN               |                \n");
    printf("\t\t\t       ____________|__________________________________|________________\n");
    printf("\t\t\t     * |           |                                  |              * |\n");
    printf("\t\t\t    *  |           |     SCORE CARD AND ACTION        |            *   |\n");
    printf("\t\t\t   *___|___________|__________________________________|__________*     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                    HIGH SCORE: %d                      |     |\n", highScore);
    printf("\t\t\t   |   |                    YOUR SCORE: %d                       |     |\n", score);
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                 WHAT DO YOU WANT TO DO?                 |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |               ENTER 0 TO CONTINUE THE GAME              |     |\n");
    printf("\t\t\t   |   |             ENTER 1 TO GO BACK THE MAIN MENU            |     |\n");
    printf("\t\t\t   |   |                 ENTER 2 TO EXIT THE GAME                |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |___|_________________________________________________________|     |\n");
    printf("\t\t\t   *   |                                                           *   |\n");
    printf("\t\t\t    *  |                                                            *  |\n");
    printf("\t\t\t     * |                                                             * |\n");
    printf("\t\t\t       *_______________________________________________________________|\n");

    int n;
    printf("\n\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &n);
    if (n == 0)
    {
        Naba(name);
    }
    else if (n == 1)
    {
        game();
    }
    else if (n == 2)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t|========================================|");
        printf("\n\t\t\t\t\t\t\t[35mThank You to playing Pacman.\n");
        printf("\t\t\t\t\t\t|========================================|\n");
    }
}

// <------------------------------------- Nur Function ------------------------------------------>

int score, x, y, f = 0;

void NR_setup()
{
    system("cls");
    gameOver = false;
    x = 20;
    y = 4;
    score = 0;
}

void NR_draw(char arr[R][C])
{
    printf("\n\n\t\t\tPRESS X TO QUIT");
    printf("\t\t\t\t\t\t\t\t\t    SCORE: %d\n", score);
    printf("\t\t\t");
    arr[x][y] = 'X';
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n\t\t\t");
    }
}

void NR_logic(char arr[R][C])
{
    switch (dir)
    {
    case LEFT:
        y -= 1;
        arr[x][y + 1] = ' ';
        break;
    case RIGHT:
        y += 1;
        arr[x][y - 1] = ' ';
        break;
    case UP:
        x -= 1;
        arr[x + 1][y] = ' ';
        break;
    case DOWN:
        x += 1;
        arr[x - 1][y] = ' ';
        break;
    default:
        break;
    }
    if (arr[x][y] == '*')
    {
        score += 5;
    }
    else if (arr[x][y] == '$')
    {
        score += 50;
    }
    else if (arr[x][y] == '&')
    {
        score += 10;
    }
    else if (arr[x][y] == '#' || arr[x][y] == 'x' || arr[x][y] == '_' || arr[x][y] == '|' || arr[x][y] == '-')
    {
        gameOver = true;
    }
}

void Nur(char name[20])
{
    char arr[R][C] = {
        {"______________________________________________|______________________________________________"},
        {"|                                             |                                             |"},
        {"|    & & & & & & & & & &     x   |----------| | |-----------|   x      & & & & & & & & & &  |"},
        {"|    &  * * * * * * *  &         | * * * * *  |  * * * * *  |          &  * * * * * * *  &  |"},
        {"|    &  * # $ $ $ # *  &         | # $ $ $ #  |  # $ $ $ #  |          &  * # $ $ $ # *  &  |"},
        {"|    &  * * * * * * *  &         | # # # # #  |  # # # # #  |          &  * * * * * * *  &  |"},
        {"|    & & & & & & & & & &         |------------|-------------|          & & & & & & & & & &  |"},
        {"|          |----------------| x               x              x  |-----------------|         |"},
        {"|          | * * * *        |                                   | * * * * * * * * |         |"},
        {"|          | # # # *        |    # # # # # # # # # # # # # #    | * # # # # * * * |         |"},
        {"|          | # $ # x        |    # # # # # # # # # # # # # #    | * # $ $ # * * * |         |"},
        {"|          | # # # x        |    # # # # # # # # # # # # # #    | * # # # # * * * |         |"},
        {"|          |-------|x*x*x*x*|    # # # # # * * * * * # # # #    |x*|--------------|     x   |"},
        {"|                           |    # # # # # * $ $ $ * # # # #    |                           |"},
        {"|---------------------------|    # # # # # * * * * * # # # #    |---------------------------|"},
        {"|                           |    # # # # # # # # # # # # # #    |                           |"},
        {"|  x      |----------|      |    # # # # # # # # # # # # # #    |*x*|-------------|     x   |"},
        {"|         | * * * *  *      |    # # # # # # # # # # # # # #    |  * * * * * * *  |         |"},
        {"|         | # # # #  x      |                                   |  # # # # # # #  |         |"},
        {"|         | # $ $ #  x      |                                   |  # # * $ $ * #  |         |"},
        {"|         | # # # #  x      |  x           x                 x  |  # # # # # # #  |         |"},
        {"|         |-----------------|                                   |-----------------|         |"},
        {"|                             |------------|---------------|                                |"},
        {"|     & & & & & & & & & &     |  * * * *   |   * * * # # # |    & & & & & & & & & &         |"},
        {"|     &  * * * * * * *  &     |  # # # #   |   # # $ $ # # |    &  * * * * * * *  &         |"},
        {"|     &  * # $ $ $ # *  &     |  # $ $ #   |   # # # # # # |    &  * # $ $ $ # *  &         |"},
        {"|     &  * * * * * * *  &  x  |---------|  |  |------------| x  &  * * * * * * *  &         |"},
        {"|     & & & & & & & & & &                  |                    & & & & & & & & & &         |"},
        {"|  x                                       |                                            x   |"},
        {"|__________________________________________|________________________________________________|"}};
    NR_setup();
    while (!gameOver)
    {
        system("cls");
        NR_draw(arr);
        input();
        NR_logic(arr);
        f++;
    }

    FILE *f;
    char p_name[200];
    int highScore;
    f = fopen("medium_score.txt", "r");
    if (f == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {
        fscanf(f, "%s %d", p_name, &highScore);
        if (score > highScore)
        {
            fclose(f);
            f = fopen("medium_score.txt", "w");
            fprintf(f, "%s %d", name, score);
            fclose(f);
        }
        else
        {
            fclose(f);
        }
    }

    system("cls");
    printf("\t\t\t                   ____________________________________                \n");
    printf("\t\t\t                   |             PACMAN               |                \n");
    printf("\t\t\t       ____________|__________________________________|________________\n");
    printf("\t\t\t     * |           |                                  |              * |\n");
    printf("\t\t\t    *  |           |     SCORE CARD AND ACTION        |            *   |\n");
    printf("\t\t\t   *___|___________|__________________________________|__________*     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                    HIGH SCORE: %d                      |     |\n", highScore);
    printf("\t\t\t   |   |                    YOUR SCORE: %d                       |     |\n", score);
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                 WHAT DO YOU WANT TO DO?                 |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |               ENTER 0 TO CONTINUE THE GAME              |     |\n");
    printf("\t\t\t   |   |             ENTER 1 TO GO BACK THE MAIN MENU            |     |\n");
    printf("\t\t\t   |   |                 ENTER 2 TO EXIT THE GAME                |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |___|_________________________________________________________|     |\n");
    printf("\t\t\t   *   |                                                           *   |\n");
    printf("\t\t\t    *  |                                                            *  |\n");
    printf("\t\t\t     * |                                                             * |\n");
    printf("\t\t\t       *_______________________________________________________________|\n");

    int n;
    printf("\n\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &n);
    if (n == 0)
    {
        Nur(name);
    }
    else if (n == 1)
    {
        game();
    }
    else if (n == 2)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t|========================================|");
        printf("\n\t\t\t\t\t\t\tThank You to playing Pacman.\n");
        printf("\t\t\t\t\t\t|=======================================\n");
    }
}

// <------------------------- Rakib Function ------------------------->

int score, x, y, w = 0;

void RB_setup()
{
    system("cls");
    gameOver = false;
    x = 4;
    y = 5;
    score = 0;
}

void RB_draw(char arr[R][C])
{
    printf("\n\n\t\t\tPRESS X TO QUIT");
    printf("\t\t\t\t\t\t\t\t\t\t  SCORE: %d\n", score);
    printf("\t\t\t");
    arr[x][y] = 'X';

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n\t\t\t");
    }
}

void RB_logic(char arr[R][C])
{
    switch (dir)
    {
    case LEFT:
        y -= 1;
        arr[x][y + 1] = ' ';
        break;
    case RIGHT:
        y += 1;
        arr[x][y - 1] = ' ';
        break;
    case UP:
        x -= 1;
        arr[x + 1][y] = ' ';
        break;
    case DOWN:
        x += 1;
        arr[x - 1][y] = ' ';
        break;
    default:
        break;
    }

    if (arr[x][y] == '*')
    {
        score += 5;
    }
    else if (arr[x][y] == '$')
    {
        score += 50;
    }
    else if (arr[x][y] == '&')
    {
        score += 2;
    }

    if (arr[x][y] == '|' || arr[x][y] == '-' || arr[x][y] == '#' || arr[x][y] == '_' || arr[x][y] == 'x')
    {
        gameOver = true;
    }
}

void Rakib(char name[200])
{

    char arr[R][C] = {
        {"______________________|_______________________________________________|____________________________"},
        {"|                     |                                               *                           |"},
        {"|  # # # # # # # # #  |---*----|---------------------------|------*---| # # # # # # # # # # # # # |"},
        {"|  #                  *        | # # # # # # # # # # # # # |          | #  * * * * * * * * * *  # |"},
        {"|  #               #  |   x    | #  * * * * * * * * * *  # |          | #  # $ $ $ $ $ $ $ $ #  # |"},
        {"|  #               #  |        | #  $ $ $ $ $ $ $ $ $ $  # |    x     | #  * * * * * * * * * *  # |"},
        {"|  # # # # # # # # #  |        | # # # # # # # # # # # # # |          | # # # # # # # # # # # # # |"},
        {"|_____________________|-*|--*--|------------------*--------|----**----|_______|___________________|"},
        {"|                   |    |                                            *       |  # $ $ $ $ #      |"},
        {"|# # # $ $ $ $ $ & &*    |------------------------*-----------------|-|       *  # # & & & #  x   |"},
        {"|                   |    | & & & & & & & & & & & & & & & & & & &    |       x |  # & & & & #      |"},
        {"|-----*-------------|--*-| & |-------------------------------|  *   |----*----|---------*---------|"},
        {"|* * * * * * * * * *|    | & |* * * * * * * * * * * * * * * *|  *   |    x    |* * * * * * * * * *|"},
        {"|# * # # # # # * * #|    | & |# * # # # # # # # # # # # # # #|  *   |         |# * # # # # # * * #|"},
        {"|# * # $ $ $ # * * #|--*-| & |# * $ $ $ $ $ $ $ $ $ $ $ $ $ #|  *   |*--*--*--|# * # $ $ $ # * * #|"},
        {"|# * # $ $ $ # * * #|    | & |# * $ $ $ $ $ $ $ $ $ $ $ $ $ #|  *   |         |# * # $ $ $ # * * #|"},
        {"|# * # # # # # * * #| x  | & |# * * * * * * * * * * * * * * #|  *   |    x    |# * # # # # # * * #|"},
        {"|# # # * * # # # * #|    | & |# * # # # # # # # # # # # # # #|  *   |         |# # # * * # # # * #|"},
        {"|-------*-----------|-*--| & |# * # # # # # # # * * # # # # #|  *   |----*----|---------*---------|"},
        {"| & & & & & & & &   |    | & |------------------*------------|  *   |         |   & & & & & & & & |"},
        {"| # # $ $ $ $ # #   |--*-| * * * * * * * * * * *  * * * * * * * *   |    x    *   # # $ $ $ $ # # |"},
        {"| & & & & & & & &   |    |------------------------------------------|         |   & & & & & & & & |"},
        {"|___________________|___*|     * * * * * * * * * * * * * * **-------|__*______|______*____________|"},
        {"|* * * * * * * * * * *|   x    |            x              |               | * * * * * * * * * * *|"},
        {"|*  # # # # # # # #  *         |--------------*------------|  & # & # & #  | *  # # # # # # # #  *|"},
        {"|*  # # $ $ $ # # #  *| # # # #| # # # # # # # # # # # # # |  & # & # & #  | *  # # $ $ $ # # #  *|"},
        {"|*  # # $ $ $ # # #  *| # $ $ #| # $ $ $ $ $ $ $ $ $ $ $ # |  & # $ $ & #  | *  # # $ $ $ # # #  *|"},
        {"|*  # # # # # # # #  *| # $ $ #| # # # # # # # # # # # # # |  & # & # & #  | *  # # # # # # # #  *|"},
        {"|* * * * * * * * * * *| # # # #|---------------------------|  & # & # & #  | * * * * * * * * * * *|"},
        {"|_____________________|____________________________________________________|______________________|"}};

    RB_setup();
    while (!gameOver)
    {
        system("cls");
        RB_draw(arr);
        input();
        RB_logic(arr);
        w++;
    }

    FILE *f;
    int highScore;
    char p_name[200];
    f = fopen("hard_score.txt", "r");
    if (f == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {
        fscanf(f, "%s %d", p_name, &highScore);
        if (score > highScore)
        {
            fclose(f);
            f = fopen("hard_score.txt", "w");
            fprintf(f, "%s %d", name, score);
            fclose(f);
        }
        else
        {
            fclose(f);
        }
    }

    system("cls");
    printf("\t\t\t                   ____________________________________                \n");
    printf("\t\t\t                   |             PACMAN               |                \n");
    printf("\t\t\t       ____________|__________________________________|________________\n");
    printf("\t\t\t     * |           |                                  |              * |\n");
    printf("\t\t\t    *  |           |     SCORE CARD AND ACTION        |            *   |\n");
    printf("\t\t\t   *___|___________|__________________________________|__________*     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                    HIGH SCORE: %d                      |     |\n", highScore);
    printf("\t\t\t   |   |                    YOUR SCORE: %d                       |     |\n", score);
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                 WHAT DO YOU WANT TO DO?                 |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |               ENTER 0 TO CONTINUE THE GAME              |     |\n");
    printf("\t\t\t   |   |             ENTER 1 TO GO BACK THE MAIN MENU            |     |\n");
    printf("\t\t\t   |   |                 ENTER 2 TO EXIT THE GAME                |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |   |                                                         |     |\n");
    printf("\t\t\t   |___|_________________________________________________________|     |\n");
    printf("\t\t\t   *   |                                                           *   |\n");
    printf("\t\t\t    *  |                                                            *  |\n");
    printf("\t\t\t     * |                                                             * |\n");
    printf("\t\t\t       *_______________________________________________________________|\n");

    int n;
    printf("\n\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &n);
    if (n == 0)
    {
        Rakib(name);
    }
    else if (n == 1)
    {
        game();
    }
    else if (n == 2)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t|========================================|");
        printf("\n\t\t\t\t\t\t\tThank You to playing Pacman.\n");
        printf("\t\t\t\t\t\t|========================================|\n");
    }
}