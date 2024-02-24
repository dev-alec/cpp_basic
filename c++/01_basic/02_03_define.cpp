#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159                             // 상수를 정의(치환)
#define loop(x, n) for (int x = 0; x < n; x++) // 반복문을 loop로 정의(치환)

int main()
{
    cout << PI << '\n';
    int sum = 0;
    loop(i, 10)
    {
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}