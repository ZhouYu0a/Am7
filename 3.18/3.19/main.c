#include <stdio.h>

int main() {
    float sales, salary;

    // ���_Ū���P����B�A�����J -1 ����
    while (1) {
        // ��J�P����B
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);

        // �p�G��J -1�A�����{��
        if (sales == -1) {
            break;
        }

        // �p���~���G���~�� 200 + 9% ���P�����
        salary = 200 + (sales * 0.09);

        // ��ܵ��G
        printf("Salary is: $%.2f\n", salary);
    }

    return 0;
}
