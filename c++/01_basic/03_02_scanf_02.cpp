#include <bits/stdc++.h>
using namespace std;
int a, b;
double c;

int main()
{
    scanf("%d.%d", &a, &b); // double 타입을 int 두개로 받을 수 있음.
    printf("\n%d %d\n", a, b);

    scanf("%lf", &c); // double 타입의 입력을 double로 받을 수 있음
    printf("%lf\n", c);
}