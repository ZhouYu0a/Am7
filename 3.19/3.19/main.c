#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;

    // ���_Ū���U�ڸ�T�A�����J -1 ����
    while (1) {
        // ��J�U�ڪ��B
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        // �p�G��J -1�A�����{��
        if (principal == -1) {
            break;
        }

        // ��J�~�Q�v
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        // ��J�U�ڤѼ�
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        // �p��Q��
        interest = (principal * rate * days) / 365;

        // ��ܧQ�����G
        printf("The interest charge is $%.2f\n", interest);
    }

    return 0;
}
