#include <stdio.h>
#include <string.h>
int main()
{ 
    int a = 0;
    int b = 0;
    char c;

    printf("첫 번째 숫자를 입력해주세요");
    scanf("%d", a);

    printf("연산을 입력해주세요 (+,-,*,/)");
    scanf("%c", c);

    printf("두 번째 숫자를 입력해주세요");
    scanf("%d", b);

    int result = 0;

    switch (c)
    {
    case '+':
        return result = a + b;
        break;
    case '-':
        return result = a - b;
    case '*':
        return result = a * b;
        break;
    case '/':
        return result = a / b;
        break;
    default:
        break;
    }

    printf("해당 결과 값은 : %d", result);

    

    return 0;
}