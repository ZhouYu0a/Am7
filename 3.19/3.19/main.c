#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;

    // 不斷讀取貸款資訊，直到輸入 -1 結束
    while (1) {
        // 輸入貸款金額
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        // 如果輸入 -1，結束程式
        if (principal == -1) {
            break;
        }

        // 輸入年利率
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        // 輸入貸款天數
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        // 計算利息
        interest = (principal * rate * days) / 365;

        // 顯示利息結果
        printf("The interest charge is $%.2f\n", interest);
    }

    return 0;
}
