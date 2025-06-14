// Different way to able to use the same variables without making them "global"
//(aka don't have to declare them as "extern").

// Use structs and pointers to group related variables intoa struct and pass
// it around
#include <stdio.h>
typedef struct
{
  int health;
  int score;
} GameState;

void update(GameState *givenGameState)
{
  givenGameState->score += 10;
}

int main()
{
  GameState myGame = {100, 0}; // health: 100.score: 0
  update(&myGame);
  printf("Score: %d\n", myGame.score); // will return 10
  return 0;
}