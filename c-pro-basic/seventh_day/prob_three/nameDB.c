#include <stdio.h>
#include <string.h>
#include "nameDB.h"

char names[10][256];

//データの初期化
void init() {
  // 名前のクリア
  for(int i = 0; i < 10; i++){
    strcpy(names[i],""); // 文字列をクリア
  }
}
//生徒の名前の設定
void setName(int num, char* name) {
  // 名前の登録
  if(num >= 0 && num < 10) {
    strcpy(names[num],name);
  }
}
// 生徒の名前の表示
void showName(int num) {
  printf("%d:%s\n",num,names[num]);
}
