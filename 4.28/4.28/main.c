#include <stdio.h>

// 定義函數
double calculateManagerPay();
double calculateHourlyPay();
double calculateCommissionPay();
double calculatePieceworkerPay();

int main() {
    int paycode;
    double weeklyPay;

    // 提示用戶輸入工資代碼
    printf("Enter employee's pay code (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
        case 1:  // Manager
            weeklyPay = calculateManagerPay();
            break;

        case 2:  // Hourly worker
            weeklyPay = calculateHourlyPay();
            break;

        case 3:  // Commission worker
            weeklyPay = calculateCommissionPay();
            break;

        case 4:  // Pieceworker
            weeklyPay = calculatePieceworkerPay();
            break;

        default:
            printf("Invalid pay code.\n");
            weeklyPay = 0.0;
            break;
        }

        if (weeklyPay > 0.0) {
            printf("The employee's weekly pay is: $%.2lf\n", weeklyPay);
        }

        // 再次提示用戶輸入工資代碼
        printf("\nEnter employee's pay code (-1 to end): ");
        scanf("%d", &paycode);
    }

    printf("Program ended.\n");
    return 0;
}

// 各類員工的薪資計算函數
double calculateManagerPay() {
    double weeklySalary;
    printf("Enter weekly salary: ");
    scanf("%lf", &weeklySalary);
    return weeklySalary;
}

double calculateHourlyPay() {
    double hourlyWage, hoursWorked, weeklyPay;
    printf("Enter hourly wage: ");
    scanf("%lf", &hourlyWage);
    printf("Enter the number of hours worked: ");
    scanf("%lf", &hoursWorked);

    if (hoursWorked <= 40) {
        weeklyPay = hourlyWage * hoursWorked;
    }
    else {
        weeklyPay = hourlyWage * 40 + hourlyWage * 1.5 * (hoursWorked - 40);
    }
    return weeklyPay;
}

double calculateCommissionPay() {
    double sales, weeklyPay;
    printf("Enter gross weekly sales: ");
    scanf("%lf", &sales);
    weeklyPay = 250.00 + 0.057 * sales;
    return weeklyPay;
}

double calculatePieceworkerPay() {
    double itemPrice, itemsProduced, weeklyPay;
    printf("Enter price per item: ");
    scanf("%lf", &itemPrice);
    printf("Enter number of items produced: ");
    scanf("%lf", &itemsProduced);
    weeklyPay = itemPrice * itemsProduced;
    return weeklyPay;
}
