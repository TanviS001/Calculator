#include <stdio.h>

int main() {
    printf("Calculator For 2 Numebrs");
    float num1, num2, ans;
    int choice;
    
    printf("\nEnter 2 Numebrs");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    printf("\nChoices: ");
    printf("\nEnter 1 If You Wanna Add 2 Numbers");
    printf("\nEnter 2 If You Wanna Subtract 2 Numbers");
    printf("\nEnter 3 If You Wanna Multiply 2 Numbers");
    printf("\nEnter 4 If You Wanna Divide 2 Numbers");
    
    printf("\nEnter your choice");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            ans = num1 + num2;
            printf("Answer is: %f + %f = %f", num1, num2, ans);
            break;
        case 2:
            ans = num1 - num2;
            printf("Answer is: %f - %f = %f", num1, num2, ans);
            break;
        case 3:
            ans = num1 * num2;
            printf("Answer is: %f * %f = %f", num1, num2, ans);
            break;
        case 4:
            ans = num1 / num2;
            printf("Answer is: %f / %f = %f", num1, num2, ans);
            break;
    }

    return 0;
}
