#include <stdio.h>

// int main() {
//   int a;
//   printf("数値を入力：");
//   //  キーボードから整数を入力
//   scanf("%d",&a);
//   //  入力した値が、正の数かどうかを調べる
//   if(a > 0){
//       printf("入力した値は、正の数です。¥n");  //  正の数だった場合に実行
//   }
// }

// int main() {
//   int a;
//   printf("数値を入力:");
//   scanf("%d", &a);
//   if(a > 0) {
//     printf("入力した値は、正の数です。\n");
//   } else {
//     printf("入力した値は、正の数ではありません。\n");
//   }
// }

// int main() {
//   int num;
//   printf("1~3の値を入力してください:");
//   scanf("%d", &num);
//   if(num == 1) {
//     printf("one\n");
//   } else if(num == 2) {
//     printf("two\n");
//   } else if(num == 3) {
//     printf("three\n");
//   } else {
//     printf("不適切な値です。\n");
//   }
// }

// int main() {
//   int dice;
//   printf(" 1から6の数値を入力してください:");
//   scanf("%d", &dice);
//   if(1 <= dice && dice <= 6) {
//       if(dice == 2 || dice == 4 || dice == 6){
//           printf("丁（チョウ）です。\n");  //  偶数ならば丁（チョウ）
//       }else{
//           printf("半（ハン）です。\n");   //  奇数ならば半（ハン）
//       }
//   } else {
//     printf("範囲外の数値です。\n");
//   }
// }

// int main() {
//   int num;
//   printf("1~3の値を入力してください:");
//   scanf("%d", &num);
//   switch(num) {
//     case 1:
//             printf("one\n");
//             break;
//     case 2:
//             printf("two\n");
//             break;
//     case 3:
//             printf("three\n");
//             break;
//     default:
//             printf("不適切な値です。\n");
//             break;
//   }
// }

// prob3-1,2,3,4,5
// int main() {
//   int num;
//   printf("数値を入力してください:");
//   scanf("%d", &num);
//   if(num != 1) {
//     printf("1ではありません。\n");
//   }
//   if(num >= 5) {
//     printf("５以上です。\n");
//   }
//   if(num < 50) {
//     printf("50未満です。\n");
//   }
//   if(num <= 10 || 90 <= num) {
//     printf("10以下か90以上の値です。\n");
//   }
//   if(20 <= num && num < 80) {
//     printf("20以上80未満です。\n");
//   }
// }

// // prob3-6
#include <time.h>
#include <stdlib.h>

// int main() {
//   int n;
//   srand((unsigned) time(NULL));
//   n = rand() % 6 + 1;
//   printf("数値:%d\n",n);
//   if(n >= 3) {
//     printf("３以上です。\n");
//   }
// }

// prob3-7,,8,9,10
// int main() {
//   int n;
//   srand((unsigned int) time(NULL));
//   n = rand() % 100 + 1;
//   printf("数値:%d\n", n);
//   if (n >= 5) {
//     printf("5以上です\n");
//   } else {
//     printf("5未満です\n");
//   }
//   if(n != 1) {
//     printf("１ではありません。");
//   } else {
//     printf("１です");
//   }
//   if(n <= 10 || 90 <= n) {
//     printf("１０以下か９０以上の値です。");
//   } else {
//     printf("10より大きく90未満の値です。");
//   }
//   if(20 <= n && n < 80) {
//     printf("20以上80未満です。");
//   } else {
//     printf("20未満か、80以上の値です。");
//   }
// }
// // prob3-12
// int main() {
//   int n;
//   srand((unsigned int) time(NULL));
//   n = rand() % 20 - 10;
//   printf("数値:%d\n", n);
//     if(n < 0) {
//     printf("負の値です。");
//   } else if(n == 0) {
//     printf("0です。");
//     }else {
//     printf("正の値です。");
//   }
// }

// //prob3-13
// int main() {
//   int n;
//   srand((unsigned int) time(NULL));
//   n = rand() % 3 + 1;
//   printf("数値:%d\n",n);
//   if(n == 1) {
//     printf("グー\n");
//   } else if(n == 2) {
//     printf("パー\n");
//   }else {
//     printf("チョキ\n");
//   }
// }

// //prob3-14
// int main() {
//   int a,b;
//   srand((unsigned int) time(NULL));
//   a = rand() % 10 + 1;
//   b = rand() % 10 + 1;
//   printf("a=%d\nb=%d\n",a,b);
//   if(a > b) {
//     printf("aのほうが大きい");
//   } else if(a < b) {
//     printf("bのほうが大きい");
//   } else {
//     printf("等しい");
//   }
// }

// //prob3-15
// int main() {
//   int n;
//   srand((unsigned int) time(NULL));
//   n = rand() % 100 + 1;
//   printf("数値:%d\n",n);
//   if(n >= 80) {
//     printf("優\n");
//   } else if(n >= 70) {
//     printf("良\n");
//   } else if(n >= 60) {
//     printf("可\n");
//   } else {
//     printf("不可\n");
//   }
// }

// //prob3-16
// int main() {
//   int n;
//   srand((unsigned int) time(NULL));
//   n = rand() % 100 + 1;
//   printf("数値:%d\n",n);
//   if(n % 2 == 0 && n % 3 == 0) {
//     printf("２と３の公約数です。\n");
//   } else if(n % 2 == 0) {
//     printf("２の倍数です。\n");
//   } else if(n % 3 == 0) {
//     printf("３の倍数です。\n");
//   }
// }

// //prob3-17
// int main() {
//   int n;
//   srand((unsigned int) time(NULL));
//   n = rand() % 100 + 1;
//   printf("数値:%d\n",n);
//   if(n <= 50 && n % 2 == 0) {
//     printf("50以下の偶数です。\n");
//   } else if(n <= 50) {
//     printf("５０以下です。\n");
//   } else if(n % 2 == 0) {
//     printf("偶数です。\n");
//   }
// }

int main() {
  int num;
  printf("数値を入れてください:");
  scanf("%d", &num);
  if(num % 4 == 0 && num % 100 != 0) {
    printf("閏年\n");
  }
  if(num % 400 == 0) {
    printf("閏年\n");
  }
}