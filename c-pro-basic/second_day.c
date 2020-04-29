#include <stdio.h>

// int main() {
//     printf("%d + %d = %d\n",5,2,5+2);               /* 足し算 */
//     printf("%d - %d = %d\n",5,2,5-2);               /* 引き算 */
//     printf("%d * %d = %d\n",5,2,5*2);               /* 掛け算 */
//     printf("%d / %d = %d 余り %d \n",5,2,5/2, 5 % 2); /* 割り算 */
// }

// int main() {
//   /*使用する変数の定義*/
//   int a = 6, b = 3, add, sub;
//   double avg;
//   add = a + b;
//   sub = a - b;
//   avg = (a + b) / 2.0; // 答えの方がダブル型なので他の計算途中の型はダブル型で計算する。
//   printf("%d + %d = %d\n", a, b, add);
//   printf("%d - %d = %d\n", a, b, sub);
//   printf("%dと%dの平均値:%f\n", a, b, avg);
// }

// c言語では変数の宣言は必ず一番最初に実行しなくてはいけない 処理が行われた後では宣言出来ない。（c++では撤回)

// int main() {
//       /* 使用する変数の定義 */
//     int a1=2,b1=2,c1=2,d1=2;    // 変数の宣言(1)
//     int a2=2,b2=2,c2=2,d2=2;    // 変数の宣言(2)
//     //  普通の演算による計算と代入
//     a1 = a1 + 1;
//     b1 = b1 - 1;
//     c1 = c1 * 2;
//     d1 = d1 / 2;
//     //  代入演算による計算
//     a2 += 1;
//     b2 -= 1;
//     c2 *= 2;
//     d2 /= 2;
//     printf("a1=%d b1=%d c1=%d d1=%d\n",a1,b1,c1,d1);
//     printf("a2=%d b2=%d c2=%d d2=%d\n",a2,b2,c2,d2);
// }


// int main(){
    // int i1,i2,j1,j2;
    // double d1,d2,e1,e2;
    // //  j1,j2に値を代入
    // j1 = 3;
    // j2 = 3;
    // //  d1,d2に値を代入。
    // d1 = 1.23;
    // d2 = 1.23;
    // //  i1,i2にd1,d2の値を代入
    // i1 = d1;            //  普通に代入
    // i2 = (int)d2;       //  キャストして代入
    // //  e1,e2にj1,j2の値を代入
    // e1 = j1;            //  普通に代入
    // e2 = (double)j2;    //  キャストして代入
    // printf("d1 = %f d2 = %f\n",d1,d2);
    // printf("i1 = %d i2 = %d\n",i1,i2);
    // printf("j1 = %d j2 = %d\n",j1,j2);
    // printf("e1 = %f e2 = %f\n",e1,e2);
// }
// キャストとはデータの型を変換するときに用いる手法

// prob2-1
// int main() {
//   int a, b;
//   int c;
//   printf("a = ");
//   scanf("%d",&a);
//   printf("b = ");
//   scanf("%d",&b);
//   printf("a + b = %d\n",a + b);
//   printf("a - b = %d\n",a - b);
//   printf("a * b = %d\n",a * b);
//   printf("a / b = %d\n",a / b);
//   printf("a ％ b = %d\n",a % b);
// }

// prob2-2
// int main() {
//   int w,h;
//   printf("長方形の幅:");
//   scanf("%d", &w);
//   printf("長方形の高さ:");
//   scanf("%d", &h);
//   printf("長方形の面積は、%d\n",w * h);
// }