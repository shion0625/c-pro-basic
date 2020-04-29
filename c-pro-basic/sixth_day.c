#include<stdio.h>

// int add(int, int);
// int sub(int, int);
// int main() {
//   int a,b,resultA, resultS;
//   printf("a=");
//   scanf("%d",&a);
//   printf("b=");
//   scanf("%d",&b);
//   resultA = add(a,b);
//   resultS = sub(a,b);
//   printf("%d + %d = %d\n", a, b, resultA);
//   printf("%d - %d = %d\n", a, b, resultS);
// }
// int add(int n1, int n2) {
//   return n1 + n2;
// }
// int sub(int n1, int n2) {
//     return n1 - n2;
// }

// int mul(int, int, int);
// int main() {
//   int a, b, c, result;
//   printf("a=");
//   scanf("%d", &a);
//   printf("b=");
//   scanf("%d", &b);
//   printf("c=");
//   scanf("%d", &c);
//   result = mul(a,b,c);
//   printf("%d * %d * %d = %d\n", a, b, c, result);
// }
// int mul(int n1, int n2, int n3) {
//   return n1 * n2 * n3;
// }

// double triangle(double, double);
// int main() {
//   double bottom, height, square;
//   printf("底辺=");
//   scanf("%lf", &bottom);
//   printf("高さ=");
//   scanf("%lf", &height);
//   square = triangle(bottom, height);
//   printf("三角形の面積%f\n", square);
// }
// double triangle(double n1, double n2) {
//   return n1 * n2 / 2;
// }

// void numJudge(int);
// int main() {
//   int a;
//   printf("整数値を入力してください:");
//   scanf("%d", &a);
//   numJudge(a);
// }
// void numJudge(int a) {
//     if(a == 0) {
//     printf("0です\n");
//   } else if(a%2 == 0) {
//     printf("偶数です\n");
//   } else {
//     printf("奇数です\n");
//   }
// }

// //prob6-6
// double circumference(double);
// double area(double);
// int main() {
//   double radius, square, circum;
//   printf("半径を入力してください:");
//   scanf("%lf", &radius);
//   circum = circumference(radius);
//   square = area(radius);
//   printf("円の円周の長さ:%lf\n", circum);
//   printf("円の面積:%lf\n", square);
// }
// double circumference(double radius) {
//   return radius * 2 * 3.14;
// }
// double area(double radius) {
//   return radius * radius * 3.14;
// }

// //prob6-9
// void square(int,int);
// int main() {
//   int vertical, width;
//   printf("たて：");
//   scanf("%d", &vertical);
//   printf("よこ：");
//   scanf("%d", &width);
//   square(vertical, width);
// }
// void square(int vertical, int width) {
//   for(int i = 0; i < vertical; i++) {
//     for(int j = 0; j < width; j++) {
//       printf("■ ");
//     }
//     printf("\n");
//   }
// }

//prob6-10
int gcd(int, int);
int lcm(int, int);
int main() {
  int a,b,resultLcm, resultGcd;
  printf("１つ目の値を入力してください：");
  scanf("%d", &a);
  printf("2つ目の値を入力してください：");
  scanf("%d", &b);
  resultGcd = gcd(a, b);
  resultLcm = lcm(a, b);
  printf("２つの数の最小公倍数は、%dです。\n",resultLcm);
  printf("２つの最大公約数は、%dです。\n",resultGcd);
}

int lcm(int a, int b){
  int x, tmp, r;
    x = a * b;
  /* 自然数 a > b を確認・入替 */
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }

  /* ユークリッドの互除法 */
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return x/b;
}
int gcd(int a, int b) {
  int tmp,r;
    /* 自然数 a > b を確認・入替 */
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }

  /* ユークリッドの互除法 */
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
 return b;
}