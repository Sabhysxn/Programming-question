#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generalRandomNumber(int n)
{
    srand(time(NULL)); //strand takes seed as an input and its defined inside stdlib.h
    return rand()%n;
}
int greater(char char1, char char2)
{
    //For rock paper scissoe - Returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return
    if (char1 == char2)
    {
        return -1;
    }
    if((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
    
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r','p','s'};
    printf("welcome to the Rock, paper, Scissor.\n");
    for(int i=0;i<3;i++)
    {
        //Take player 1's input
        printf("player 1's Turn:\n");
        printf("choose 1 for Rock, 2 for paper and 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp-1];
        printf("You chose %c\n\n", playerchar);

        //Generate computer's input
        printf("Computer's Turn:\n");
        printf("choose 1 for rock, 2 for paper and 3 for scissor\n");
        temp = generalRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose %c\n\n", compchar);

        //compare the scores
        if(greater(compchar, playerchar) == 1)
        {
            compScore += 1;
            printf("CPU Got it!\n");
        }
        else if(greater(compchar, playerchar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a draw!\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got it!\n");
        }
        printf("You: %d\nCPU: %d\n\n",playerScore, compScore);
        
    }
        if (playerScore > compScore)
        {
            printf("You win the game\n");
        }
        else if (playerScore < compScore)
        {
            printf("CPU win the game\n");
        }
        else
        {
            printf("It's a draw\n");
        }
        return 0;
}