#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i, j;
    /*int board[8][8] = {{0, 1, 0, 1, 0, 1, 0, 1},
                       {1, 0, 1, 0, 1, 0, 1, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 2, 0, 2, 0, 2, 0, 2},
                       {2, 0, 2, 0, 2, 0, 2, 0}};*/
    //int row[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    //char col[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //char player[2][10];
    printf("\n\t\t      --x--x--x--x--x--x--\n");
    printf("\t\t     |      Checkers      |\n");
    printf("\t\t      --x--x--x--x--x--x--\n");
    printf("\n\n\t\t   > Press any key to start <\n\n");
    getch();
    system("cls");
    /*for (i = 0; i < 64; ++i)
        printf("-");*/
    printf("\n");
    char player[2][10];
    printf("\n  Player 1 name is (less than 10 characters) : ");
    scanf("%s", &player[0]);
    printf("\n  Player 2 name is (less than 10 characters) : ");
    scanf("%s", &player[1]);
    printf("\n");
    /*for (i = 0; i < 64; ++i)
        printf("-");*/
    system("cls");
    printf("\n");
    printf("  %s is x\n", player[0]);
    printf("  %s is o", player[1]);
    printf("\n\n");
    int board[8][8] = {{0, 1, 0, 1, 0, 1, 0, 1},
                       {1, 0, 1, 0, 1, 0, 1, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 2, 0, 2, 0, 2, 0, 2},
                       {2, 0, 2, 0, 2, 0, 2, 0}};
    int row[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    //system("cls");
    for (i = 0; i < 8; ++i)
    {
        printf("%9d", row[i]);
        for (j = 0; j < 8; ++j)
        {
            printf("|");
            switch (board[i][j])
            {
                case 0: printf(" "); break;
                case 1: printf("x"); break;
                case 2: printf("o"); break;
            }
        }
        printf("\n");
    }
    //char col[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int col[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    printf("\t  ");
    for (i = 0; i < 8; ++i)
        printf("%d ", col[i]);
    printf("\n");
    int sl[2], mov, turn, score[2] = {0, 0},g ,k;
    for (turn = 0; turn >= 0; ++turn)
    {
        if (turn % 2 == 0)
        {
            printf("\n  %s's turn!\n", player[0]);
            printf("  select row: "); scanf("%d", &sl[0]);
            printf("  select column: "); scanf("%d", &sl[1]);
            //printf("  move to : "); scanf("%d %d", &sl[2], &sl[3]);
            printf("  move to (0 = left, 1 = right): "); scanf("%d", &mov);
            board[sl[0]][sl[1]] = 0;
            //board[sl[2]][sl[3]] = 1;
            if (mov == 0)
            {
                //board[sl[0]+1][sl[1]-1] = 1;
                if (board[sl[0]+1][sl[1]-1] == 2)
                {
                    board[sl[0]+2][sl[1]-2] = 1;
                    board[sl[0]+1][sl[1]-1] = 0;
                    ++score[0];
                }
                else board[sl[0]+1][sl[1]-1] = 1;
            }
            else
            {
                //board[sl[0]+1][sl[1]+1] = 1;
                if (board[sl[0]+1][sl[1]+1] == 2)
                {
                    board[sl[0]+2][sl[1]+2] = 1;
                    board[sl[0]+1][sl[1]+1] = 0;
                    ++score[0];
                }
                else board[sl[0]+1][sl[1]+1] = 1;
            }
            system("cls");
            printf("\n");
            printf("  %s is x\n", player[0]);
            //for (k = 1; k <= score[0];) printf("o");
            printf("  %s is o", player[1]);
            //for (g = 0; g <= score[1];) printf("x");
            printf("\n\n");
            //printf("\n");
            for (i = 0; i < 8; ++i)
            {
                printf("%9d", row[i]);
                for (j = 0; j < 8; ++j)
                {
                    printf("|");
                    switch (board[i][j])
                    {
                        case 0: printf(" "); break;
                        case 1: printf("x"); break;
                        case 2: printf("o"); break;
                    }
                }
            printf("\n");
            }
            //char col[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
            //int col[8] = {0, 1, 2, 3, 4, 5, 6, 7};
            printf("\t  ");
            for (i = 0; i < 8; ++i)
                printf("%d ", col[i]);
            printf("\n");
        }
        else
        {
            printf("\n  %s's turn!\n", player[1]);
            printf("  select row: "); scanf("%d", &sl[0]);
            printf("  select column: "); scanf("%d", &sl[1]);
            //printf("  move to : "); scanf("%d %d", &sl[2], &sl[3]);
            printf("  move to (0 = left, 1 = right): "); scanf("%d", &mov);
            board[sl[0]][sl[1]] = 0;
            //board[sl[2]][sl[3]] = 2;
            if (mov == 0)
            {
                //board[sl[0]-1][sl[1]-1] = 2;
                if (board[sl[0]-1][sl[1]-1] == 1)
                {
                    board[sl[0]-2][sl[1]-2] = 2;
                    board[sl[0]-1][sl[1]-1] = 0;
                    ++score[1];
                }
                else board[sl[0]-1][sl[1]-1] = 2;
            }
            else
            {
                //board[sl[0]-1][sl[1]+1] = 2;
                if (board[sl[0]-1][sl[1]+1] == 1)
                {
                    board[sl[0]-2][sl[1]+2] = 2;
                    board[sl[0]-1][sl[1]+1] = 0;
                    ++score[1];
                }
                else board[sl[0]-1][sl[1]+1] = 2;
            }
            //if (board[sl[0]-1][sl[1]-1] == 1) board[sl[0]-2][sl[1]-2] = 2;
            system("cls");
            printf("\n");
            printf("  %s is x\n", player[0], score[0]);
            //for (k = 0; k <= score[0];) printf("o");
            printf("  %s is o", player[1], score[1]);
            //for (g = 0; g <= score[1];) printf("x");
            printf("\n\n");
            //printf("\n");
            for (i = 0; i < 8; ++i)
            {
                printf("%9d", row[i]);
                for (j = 0; j < 8; ++j)
                {
                    printf("|");
                    switch (board[i][j])
                    {
                        case 0: printf(" "); break;
                        case 1: printf("x"); break;
                        case 2: printf("o"); break;
                    }
                }
            printf("\n");
            }
            //char col[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
            //int col[8] = {0, 1, 2, 3, 4, 5, 6, 7};
            printf("\t  ");
            for (i = 0; i < 8; ++i)
                printf("%d ", col[i]);
            printf("\n");
        }
    }
    return 0;
}
