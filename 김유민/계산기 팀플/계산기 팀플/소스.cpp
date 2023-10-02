#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    // ������ 2�� ���� �� ������ �̿��Ͽ� ����
    int bosu = ~b + 1;
    int result = add(a, bosu);
    return result;
}

int multiply(int a, int b) {
    // ������ ������ �̿��Ͽ� ����
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum = add(sum, a);
    }
    return sum;
}

int divide(int a, int b) {
    // �������� �⺻������ ������ �̿��Ͽ� ����
    int sum = 0;
    int result = 0;

    while (sum < a) {
        sum = add(sum, b);
        result = add(result, 1);
    }

    return subtract(result, 1);
}

// �������� ����ϴ� �Լ�
void Binary(int n) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

void Results(int x, int y) {
    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("HEX: %#x\n", add(x, y));
    printf("OCT: %#o\n", add(x, y));
    printf("BIN: ");
    Binary(add(x, y));
    printf("\n");

    printf("%d - %d = %d\n", x, y, subtract(x, y));
    printf("HEX: %#x\n", subtract(x, y));
    printf("OCT: %#o\n", subtract(x, y));
    printf("BIN: ");
    Binary(subtract(x, y));
    printf("\n");

    printf("%d * %d = %d\n", x, y, multiply(x, y));
    printf("HEX: %#x\n", multiply(x, y));
    printf("OCT: %#o\n", multiply(x, y));
    printf("BIN: ");
    Binary(multiply(x, y));
    printf("\n");

    printf("%d / %d = %d\n", x, y, divide(x, y));
    printf("HEX: %#x\n", divide(x, y));
    printf("OCT: %#o\n", divide(x, y));
    printf("BIN: ");
    Binary(divide(x, y));
    printf("\n");
}

int main() {
    int x, y;

    printf("�ΰ��� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &x, &y);

    Results(x, y);

    return 0;
}