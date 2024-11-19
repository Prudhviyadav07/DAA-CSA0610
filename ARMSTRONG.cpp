#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;
    while (num != 0) {
        digits++;
        num /= 10;
    }
    num = originalNum;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return sum == originalNum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}