#include <bits/stdc++.h>
using namespace std;

int a;
double b;
char c;
int main()
{
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
}

// scanf는 주로 입력형식이 까다롭거나 이를 이용할 때 사용하는개 좋다.
// 그렇지 않은 경우에는 주로 cin을 쓰는게 좋다.
/*
    scanf로 받을 수 있는 타입과 양식.
    d int
    c char
    s string
    lf double
    ld long double
*/