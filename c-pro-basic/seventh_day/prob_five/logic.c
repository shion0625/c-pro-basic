#include <stdlib.h>
#include <time.h>
#include "logic.h"

extern int player, computer;
void init() {
  srand((unsigned int) time(NULL));
}
void setPlayer(int num) {
  player = num;
}
void setComputer() {
  computer = rand() % 3;
}