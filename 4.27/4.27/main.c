#include <stdio.h>

int main() {
    int a, b, c;

    // �ϥΤT���j��ɤO�j�M�Ҧ��i�઺�T����
    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {  // b �q a �}�l�A�קK����
            for (c = b; c <= 500; c++) {  // c �q b �}�l�A�]�� c �O�̤j����
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
