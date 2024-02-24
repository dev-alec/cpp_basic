#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a = 12, b = 23;
int aa = 12, bb = 23;
string str = "abcdef";

double cc = 1.23456789;
int main()
{
    // 매개변수를 지정하여 출력하기.
    printf("abcdef %d and %d\n", a, b);

    // 형식을 지정하여 출력하기
    printf("%02d\n", aa);
    printf("%02d\n", bb);
    printf("%0.6lf\n", cc);

    printf("string type %s", str);         // 문자열을 printf로 출력할 때 주의사항. 문자열에 댛나 포인터 타입으로 바꿔줘야함.
    printf("string type %s", str.c_str()); // 문자열을 출력할 땐 cout이 간편하다.
    return 1;
}