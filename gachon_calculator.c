#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int add(int a, int b) {
    int calc;


    return calc;
}

int subtract(int a, int b) {
    int calc;


    return calc;
}

int multiply(int a, int b) {
    int calc;


    return calc;
}

int divide(int a, int b) {
    int calc;


    return calc;
}

int remainder(int a, int b) {
    int calc;


    return calc;
}


int main(void)
{
    int x;
    int y;
    char op;
    int result;

    printf("계산할 식을 입력하세요 >> ");
    scanf("%d %c %d", &x, &op, &y);

    switch (op) {
    case '+': 
        result = add(x, y);
        break;

    case '-':
        result = subtract(x, y);
        break;

    case '*':
        result = multiply(x, y);
        break;
    }

    printf("%d%c%d = %d/n", x, op, y, result);

    return 0;
}