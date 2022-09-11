#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <string.h>
/*struct player
{
    char name[15];
    int points;
};
*/
int cpu(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    //struct player player1;
    char player[15];
    int turn, move, comp;
    int arr[1][2];
    //char name[12];
    printf("Welcome to our game of stone, paper and scissor.\nPlz Enter your name to start the game:\n");
    //scanf("%s", &player1.name);
    scanf("%s", &player);
    //gets(name);
    //printf("");
    //printf("%s", player1.name);

    for (int turn = 1; turn <= 3; turn++)
    {
        //printf("%d", turn);
        //printf("%s", player);

        printf("\n%s's move.\nPlease choose your move by typing it's corresponding number:\n1. stone \n2. paper\n3. scissor\n", player);
        scanf("%d", &move);
        comp = cpu(3) + 1;

        if (move == comp)
        {
            printf("Draw!\n");
            arr[0][turn - 1] = 0;
            arr[1][turn - 1] = 0;
        }
        else if (move == 1)
        {
            if (comp == 3)
            {
                printf("You won");
                arr[0][turn - 1] = 1;
                arr[1][turn - 1] = 0;
            }
            else
            {
                printf("You lost");
                arr[1][turn - 1] = 1;
                arr[0][turn - 1] = 0;
            }
        }
        else if (move == 2)
        {
            if (comp == 1)
            {
                printf("You won");
                arr[0][turn - 1] = 1;
                arr[1][turn - 1] = 0;
            }
            else
            {
                printf("You lost");
                arr[1][turn - 1] = 1;
                arr[0][turn - 1] = 0;
            }
        }
        else //if (move == 3)
        {
            if (comp == 2)
            {
                printf("You won");
                arr[0][turn - 1] = 1;
                arr[1][turn - 1] = 0;
            }
            else
            {
                printf("You lost");
                arr[1][turn - 1] = 1;
                arr[0][turn - 1] = 0;
            }
        }
    }

    printf("\nThe final score are : \nYou :       ");
    for (int i = 0; i <= 2; i++)
    {
        printf("    %d", arr[0][i]);
    }
    printf("\nCommputer : ");
    for (int i = 0; i <= 2; i++)
    {
        printf("    %d", arr[1][i]);
    }

    return 0;
}