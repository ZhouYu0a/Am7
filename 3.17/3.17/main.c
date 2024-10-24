#include <stdio.h>

int main() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    // ���_Ū���b���ơA�����J -1 ����
    while (1) {
        // Ū���b�ḹ�X
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        // �p�G�b�ḹ�X�O -1�A�����{��
        if (accountNumber == -1) {
            break;
        }

        // Ū����L������T
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        // �p��s�l�B
        newBalance = beginningBalance + totalCharges - totalCredits;

        // ��ܱb�ḹ�X�B�H���B�שM�s�l�B
        printf("Account:      %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance:      %.2f\n", newBalance);

        // �P�_�O�_�W�L�H���B��
        if (newBalance > creditLimit) {
            printf("Credit limit exceeded.\n");
        }

        printf("\n"); // ����A�K��U�@����J
    }

    return 0;
}
