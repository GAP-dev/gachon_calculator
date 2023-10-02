#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bosu (int n) {
    return (~n) + 1;
}

int main() {
    int num1, num2;
    char op;

    printf("����� ���� �Է��ϼ��� (��: 13 - 5): ");
    if (scanf("%d %c %d", &num1, &op, &num2) !=3 ){
        printf("�ùٸ� ���� �Է��ϼ���.\n");
            return 1;
    }
    int result;
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 + bosu(num2);
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("0���� ���� �� �����ϴ�.\n");
            return 1;
        }
        break;
    default:
        printf("�ùٸ� �����ڸ� �Է��ϼ���.\n");
        return 1;
    }
    // 2���� ��ȯ�� ���߽��ϴ�
    printf("%d %c %d = %d [HEX: %X, OCT: %o, BIN: ]�Դϴ�.\n", num1, op, num2, result, result, result, result );

    return 0;
}
    