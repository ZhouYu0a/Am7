#include <stdio.h>

int main() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    // 不斷讀取帳戶資料，直到輸入 -1 結束
    while (1) {
        // 讀取帳戶號碼
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        // 如果帳戶號碼是 -1，結束程式
        if (accountNumber == -1) {
            break;
        }

        // 讀取其他相關資訊
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        // 計算新餘額
        newBalance = beginningBalance + totalCharges - totalCredits;

        // 顯示帳戶號碼、信用額度和新餘額
        printf("Account:      %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance:      %.2f\n", newBalance);

        // 判斷是否超過信用額度
        if (newBalance > creditLimit) {
            printf("Credit limit exceeded.\n");
        }

        printf("\n"); // 換行，便於下一次輸入
    }

    return 0;
}
