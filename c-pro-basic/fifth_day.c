#include <stdio.h>

// int main() {
//   double one = 1.2, two = 3.7, three = 4.1, sum, avg;
//   printf("%f %f %f\n", one, two, three);
//   sum = one + two + three;
//   avg = sum / 3.0;
//   printf("合計値:%f\n", sum);
//   printf("平均値:%f\n", avg);
// }

// int main() {
//   double d[3], sum, avg;
//   d[0] = 1.2;
//   d[1] = 3.7;
//   d[2] = 4.1;
//   sum = 0.0;
//   for(int i = 0; i < 3; i++) {
//     printf("%f ",d[i]);
//     sum += d[i];
//   }
//   printf("\n");
//   avg = sum / 3.0;
//   printf("合計値:%f\n", sum);
//   printf("平均値:%f\n", avg);
// }

// int main() {
//   int n[] = {5,4,3,2,1};
//   for(int i = 0; i < 5; i++) {
//     printf("n[%d] = %d  ",i,n[i]);
//   }
//   printf("\n");
// }

// int main() {
//   char s1[4] = {'a','b','c','\0'};
//   char s2[] = "Hello World.";
//   char s3[10]; // 最大１０文字の文字列

//   printf("文字を入力してください。:");
//   scanf("%s", s3);
//   printf("s1 = %s\n",s1);
//   printf("s3 = %s\n",s3);
// }

// int main() {
//   int a[3][4], m, n;
//   for(m = 0; m < 3; m++) { // vertical
//     for(n = 0; n < 4; n++) { // side
//       a[m][n] = m+n;
//     }
//   }

//   for(m=0; m < 3; m++) {
//     for(n=0; n < 4; n++) {
//       printf("%d ",a[m][n]);
//     }
//     printf("\n");
//   }
// }


//prob5-1
#include <time.h>
#include <stdlib.h>

// int main() {
//   int arr[6];
//   srand((unsigned int) time(NULL));
//   for(int i = 0; i < 6; i++) {
//     int k = rand() % 6 + 1;
//     printf("ar[%d] = %d   ",i, k);
//   }
// }

// //prob5-2
// int main() {
//   double arr[4] = {1.2, -1.3, 5.2, 4.8};
//   for(int i = 0; i < 4; i++) {
//     printf("arr[%d]=%.1f  ",i,arr[i]);
//   }
// }

// //prob5-3
// int main() {
//   int data[10], evenNum[10], oddNum[10];
//   srand((unsigned int) time(NULL));
//   int e = 0;
//   int o = 0;
//   for(int i = 0; i < 10; i++) {
//     int k = rand() % 10 + 1;
//     data[i] = k;
//     if(data[i] % 2 == 0) {
//       evenNum[e] = data[i];
//       e++;
//     } else {
//       oddNum[o] = data[i];
//       o++;
//     }
//   }

//   for(int i = 0; i < 10; i ++) {
//     printf("%d ",data[i]);
//   }
//     printf("\n");
//   printf("偶数: ");
//   for(int i = 0; i < e; i++) {
//     printf("%d ", evenNum[i]);
//   }
//     printf("\n");
//   printf("奇数: ");
//     for(int i = 0; i < o; i++) {
//     printf("%d ", oddNum[i]);
//   }
//   printf("\n");
// }

// //prob5-4
// int main() {
//   int data[10],lessThanFive[10], fiveOrMore[10], l = 0, f = 0;
//   srand((unsigned int) time(NULL));
//   for(int i = 0; i < 10; i++) {
//   int k = rand() % 10 + 1;
//   data[i] = k;
//   if(k >= 5) {
//     fiveOrMore[f] = k;
//     f++;
//   } else {
//     lessThanFive[l] = k;
//     l++;
//   }
//   }

//     for(int i = 0; i < 10; i ++) {
//     printf("%d ",data[i]);
//   }
//     printf("\n");
//   printf("five or more: ");
//   for(int i = 0; i < f; i++) {
//     printf("%d ", fiveOrMore[i]);
//   }
//     printf("\n");
//   printf("less than five: ");
//     for(int i = 0; i < l; i++) {
//     printf("%d ", lessThanFive[i]);
//   }
//   printf("\n");
// }

// //prob5-6
// int main() {
//   int data[10];
//   srand((unsigned int) time(NULL));
//   for(int i = 0; i < 10; i++) {
//     int k = rand() % 10 + 1;
//     data[i] = k;
//   }
//   for(int i = 0; i < 10; i++) {
//     printf("%d ",data[i]);
//   }
//   printf("\n");
//     /* 数値を降順にソート */
//     int tmp;
//   for (int i=0; i<10; ++i) {
//     for (int j=i+1; j<10; ++j) {
//       if (data[i] < data[j]) {
//         tmp =  data[i];
//         data[i] = data[j];
//         data[j] = tmp;
//       }
//     }
//   }
//   printf("最大値:%d\n", data[0]);
//   printf("最小値:%d\n", data[9]);
// }

// //prob5-7
// int main() {
//   int arr[5],sum = 0, avg;
//   srand((unsigned int) time(NULL));
//   for(int i = 0; i < 5; i++) {
//     int n = rand() % 10 + 1;
//     sum+=n;
//     arr[i] = n;
//   }
//   for(int i = 0; i < 5; i++) {
//     printf("%d ",arr[i]);
//   }
//   printf("\n");
//   printf("合計値:%d\n",sum);
//   avg =sum/5;
//   printf("平均値:%d\n\n",avg);
//   printf("平均値より大きい数:");
//   for(int i = 0; i < 5; i++) {
//     if(arr[i] > avg) {
//       printf("%d ",arr[i]);
//     }
//   }
//     printf("\n平均値より小さい数:");
//     for(int i = 0; i < 5; i++) {
//       if(arr[i] < avg) {
//         printf("%d ",arr[i]);
//       }
//     }
//     printf("\n");
// }

