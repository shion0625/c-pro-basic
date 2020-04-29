#include <stdio.h>
#include "showResult.h"
#include "logic.h"

int player = 0;
int computer = 0;
char results[3][16] = {"グー","チョキ","パー"};

int main(){
    int num;
    init();
    printf("じゃんけんゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");
    while(1){
        printf("あなたの手は？(0-2):");
        scanf("%d",&num);
        if(num < 0 || num > 2){
            printf("終了します\n");
            break;
        }else{
            setPlayer(num); //  自分の手設定
            setComputer();  //  コンピュータの手設定
            Judge();        //  判定
        }
    }
}