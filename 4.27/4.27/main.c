#include <stdio.h>

int main() {
    int a, b, c;

    // 使用三重迴圈暴力搜尋所有可能的三元組
    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {  // b 從 a 開始，避免重複
            for (c = b; c <= 500; c++) {  // c 從 b 開始，因為 c 是最大的邊
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
