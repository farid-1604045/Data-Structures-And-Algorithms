//Simple betting game
//"Jack Queen King" - computer shuffles these cards
//player has to guess the position of queen
//If he wins, he takes 3*bet
//If he looses, he looses the bet amount
// Player has $100 initially
#include<bits/stdc++.h>
using namespace std;

int cash = 100;
void Play(int bet)
{
    char C[3]={'J','Q','K'};
    printf("Shuffling....");
    srand(time(NULL));
    int i;
    for(i=0; i<5; i++)
    {
        int x = rand()%3;
        int y = rand()%3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    int playersGuess;
    printf("What's the position of queen - 1,2 or 3?");
    scanf("%d",&playersGuess);
    if(C[playersGuess-1]=='Q')
    {
        cash += 3*bet;
        printf("You win | Result = %c%c%c Total Cash = %d\n",C[0],C[1],C[2],cash);
    }
    else
    {
        cash-=bet;
        printf("You loose! Result = %c%c%c Total Cash = %d\n",C[0],C[1],C[2],cash);
    }
}
int main()
{
    int bet;
    printf("Welcome to the Virtual Casino\n");
    printf("Total cash = $%d\n",cash);
    while(cash>0)
    {
        printf("What's your bet? $");
        scanf("%d",&bet);
        if(bet==0 || bet>cash)break;
        Play(bet);
        printf("\n***********************\n");
    }
}
