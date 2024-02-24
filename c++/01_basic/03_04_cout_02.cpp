#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
// cout의 실수 출력
int main()
{
    cout << a << '\n'; // 기본 자릿수 6번째 자리에서 반올림
    cout.precision(7); // 원하는 반올림 자릿수 +1
    cout << a << '\n';
    return 0;
}