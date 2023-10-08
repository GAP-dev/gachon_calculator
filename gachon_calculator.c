#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int add(int a, int b) {
    int calc;


    return calc;
}

int subtract(int a, int b) {
    int bosu = ~b + 1;

    int calc = a + bosu;

    return calc;
}

int multiply(int a, int b) {
    int calc = 0;

    for (int i = 0; i < b; i++) {
        calc = calc + a;
    }
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
    }
    else {
        printf("0¿∏∑Œ ≥™¥≠ ºˆ æ¯Ω¿¥œ¥Ÿ.\n");
        return 0;
    }
}

int remainder(int a, int b) {
    int c = a;
    int m = 0;
    int remainder=0;

    if (b != 0) {
        while (c >= b) {
            c -= b;
            m++;
        }
        remainder = subtract(a, b * m);
        return remainder;
    }

    else {
        printf("0¿∏∑Œ ≥™¥≠ ºˆ æ¯Ω¿¥œ¥Ÿ.\n");
        return 0;
    }
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
        printf("%d%c%d = %d [≥™∏”¡ˆ¥¬ %d] [HEX: %#x, OCT: %#o, BIN:", x, op, y, result, r, result, result);
        Binary(result);
        printf("]\n");
    }
    else if (op == '+' || op == '-' || op == '*') {
        printf("%d%c%d = %d [HEX: %#x, OCT: %#o, BIN: ", x, op, y, result, result, result);
        Binary(result);
        printf("]\n");
    }
    else {
        return 0;
    }
    
	return 0;
}


