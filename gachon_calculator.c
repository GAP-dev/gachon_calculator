#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int negative=0;
void Binary(int n) {
    printf("0b");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int add(int a, int b) {
    int calc = a + b;
    printf("<< ADD 연산과정 출력 >>\n\n");
    printf("%d + %d = %d\n\n",a,b,calc);
    return calc;
}

int subtract(int a, int b) {
    int bosu = ~b + 1;
    printf("<< SUBTRACT 연산과정 출력 >>\n\n");
    printf("이진수 변환 결과 : \n");
    Binary(a);
    printf("\n");
    Binary(b);
    printf("\n\n");
    printf("보수 변환 결과 : \n");
    Binary(a);
    printf("\n");
    Binary(~b);
    printf("\n\n");
    printf("연산 결과 : \n");
    Binary(a);
    printf("\n");
    Binary(~b+1);
    printf("\n");
    printf("----------------------------------\n");
    Binary(a + bosu);
    printf("\n\n");
    int calc = a + bosu;

    return calc;
}

int multiply(int a, int b) {
    int calc = 0;
    printf("<< MULTIPLY 연산과정 출력 >>\n\n");
    for (int i = 0; i < b; i++) {
        calc = calc + a;
    }
    printf("%d",a);
    for (int i = 0; i < b-1; i++) {
        printf(" + %d", a);
    }
    printf(" = %d\n\n",calc);
    if(negative==0)
    {
        return calc;
    }
    else
    {
        return subtract(0,calc);
    }
}

int divide(int a, int b) {
    int m = 0;
    printf("<< DIVIDE 연산과정 출력 >>\n\n");
    if (b != 0) {
        while (a >= b) {
            printf("[%d] : %d - %d = %d\n",m+1,a,b,a-b);
            a -= b;
            m++;
        }
        printf("\n");
        if(negative==0)
        {
            return m;
        }
        else
        {
            return subtract(0,m);
        }
    }
    else {
        printf("0으로 나눌 수 없습니다.\n");
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
        remainder = subtract(a, multiply(b,m));
        return remainder;
    }

    else {
        printf("0으로 나눌 수 없습니다.\n");
        return 0;
    }
    
}
int main(void)
{
    int x;
    int y;
    char op;
    int result = 0;
    int r = 0;

    printf("계산할 식을 입력하세요 >> ");
    if(scanf("%d %c %d", &x, &op, &y)==3)
    {
        printf("\n");
    }
    else
    {
        printf("올바른 입력 형태가 아닙니다!\n");
        return 0;
    }
    if(op=='*'||op=='/')
    {
        if(x<0&&y>0)
        {
            negative=1;
            x=subtract(0,x);
        }
        else if(x>0&&y<0)
        {
            negative=1;
            y=subtract(0,y);
        }
        else if(x<0 && y<0)
        {
            x=subtract(0,x);
            y=subtract(0,y);
            negative=0;
        }
        else
        {
            negative=0;
        }
    }
    printf("\n");
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
    case '/':
        result = divide(x, y);
        r = remainder(x, y);
        break;

    default: printf("올바른 연산자를 입력하세요.");

    }

    if (op == '/' && negative == 0) {
        printf("%d %c %d = %d [나머지는 %d] [HEX: %#x, OCT: %#o, BIN: ", x, op, y, result, r, result, result);
        Binary(result);
        printf("]\n");
    }
    else if (op == '+' || op == '-' || op == '*' || (negative == 1 && op == '/')) {
        printf("%d %c %d = %d [HEX: %#x, OCT: %#o, BIN: ", x, op, y, result, result, result);
        Binary(result);
        printf("]\n");
    }
    else {
        return 0;
    }


     
    return 0;
}
