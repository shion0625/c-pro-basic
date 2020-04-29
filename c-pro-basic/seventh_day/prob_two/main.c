#include <stdio.h>
#include "randLib.h"

int main() {
  int i,num;
  init_rand();
  for(int i =0; i < 100; i++) {
    num = getRand(-10, 10); // -10 から 10までの乱数発生
    printf("乱数: %d\n",num);
  }
}