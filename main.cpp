#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  

int randum(int dice, int guess) {
    return (dice % 2) == guess;
}

void saikoro(int dice, int guess, int (*callback)(int, int)) {
    printf("判定中...\n");
    Sleep(3000);  // 3秒
    if (callback(dice, guess)) {
        printf("正解。\n", dice);
    }
    else {
        printf("不正解。\n", dice);
    }
}

int main() {
    int num;
    srand((unsigned)time(NULL)); 
    printf("半(1=奇数) or 丁(0=偶数) を選んでください: ");
    scanf_s("%d", &num);
    int dice = rand() % 6 + 1;
    saikoro(dice, num, randum);

    return 0;
}