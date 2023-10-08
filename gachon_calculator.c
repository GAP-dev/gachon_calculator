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
    int m = 0;
    if (b != 0) {
        while (a >= b) {
            a -= b;
            m++;
        }
        return m;
    }    else {
        printf("0¿∏∑Œ ≥™¥≠ ºˆ æ¯Ω¿¥œ¥Ÿ.\n");
        return 0;
    }
    return calc;
}

int remainder(int a, int b) {
    int calc;
    while (a >= b) {
        a -= b;
    }
    return a;

    return calc;
}

void Binary(int n) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}


int main(void)
{
	int x;
	int y;
	char op;
    int result;
    int r;

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

    if (op == '/') {
        printf("%d%c%d = %d [≥™∏”¡ˆ¥¬ %d] [HEX: %X, OCT: %o, BIN: ]", x, op, y, result, r, result, result, result);
        Binary(result);
    }
    else {
        printf("%d%c%d = %d [HEX: %X, OCT: %o, BIN: ", x, op, y, result, result, result);
        Binary(result);
        printf("]\n");
    }
    
	return 0;
}


