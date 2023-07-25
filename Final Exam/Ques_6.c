/*Tiger and Pathan are bored with movies and want to play a game. They will play the game in N round.
 Each time, both of them will guess a number X1 and X2, and whoever guesses the larger number will 
 win that round. 
 The final winner will be the one who wins the most rounds.
 In the event that they both win an equal number of times, the game will end in a draw.*/
#include <stdio.h>

int main() {
  int n, x, y;
  scanf("%d", & n);
  int tiger = 0;
  int pathan = 0;
  for (int i = 1; i <= n; i++) {
    scanf("%d %d", & x, & y);
    if (x > y) {
      tiger++;
    }
    if (x < y) {
      pathan++;
    }
  }
  if (tiger > pathan) {
    printf("Tiger");
  } else if (tiger < pathan) {
    printf("Pathan");
  } else {
    printf("Draw");
  }

  return 0;
}