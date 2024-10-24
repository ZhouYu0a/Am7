#include <stdio.h>

int main() {
    float sales, salary;

    // 不斷讀取銷售金額，直到輸入 -1 結束
    while (1) {
        // 輸入銷售金額
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);

        // 如果輸入 -1，結束程式
        if (sales == -1) {
            break;
        }

        // 計算薪水：基本薪資 200 + 9% 的銷售佣金
        salary = 200 + (sales * 0.09);

        // 顯示結果
        printf("Salary is: $%.2f\n", salary);
    }

    return 0;
}
