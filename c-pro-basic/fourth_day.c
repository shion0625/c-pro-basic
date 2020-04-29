#include <stdio.h>

// int main() {
//   for(int i = 0; i <= 5; i++) {
//     printf("%d ",i);
//   }
//   printf("\n");
// }

// int main() {
//   for(int i = 1; i <= 2; i++) {
//     for(int j = 1; j <= 3; j++) {
//       printf("%d + %d = %d  ",i,j,i+j);
//     }
//     printf("\n");
//   }
// }

// int main() {
//   int i = 0;
//   while(i <= 5) {
//     printf("%d ",i);
//     i++;
//   }
//   printf("\n");
// }

// int main() {
//   int i = 0;
//   do{
//     printf("%d ",i);
//     i++;
//   } while(i <= 5);
//   printf("\n");
// }

//  iを用いたループ
// int main(){
//     int i,num;
//     printf("回数を入力：");
//     scanf("%d",&num);   //  キーボードからループの回数を入力
//     //  whileループで実行
//     printf("whileで実行\n");
//     i = 1;
//     while(i <= num){
//         printf("*");
//         i++;
//     }
//     printf("\n");
//     //  do～whileループで実行
//     printf("do～whileで実行\n");
//     i = 1;
//     do{
//         printf("*");
//         i++;
//     }while(i <= num);
//     printf("\n");
// }

//  iを用いたループ
int main(){
    int num;
    printf("負の値で、ループから抜けます。\n");
    while(1){
        printf("数値を入力：");
        scanf("%d",&num);
        if(num < 0){
            //  ループから抜ける処理
            break;
        }
    }
    printf("終了\n");
}