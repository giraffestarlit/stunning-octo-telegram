#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0;
    printf("Enter 3-digit number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    printf(sum == original ? "✅ Armstrong!\n" : "❌ Not Armstrong\n");
}
