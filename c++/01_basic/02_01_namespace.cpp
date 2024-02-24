#include <bits/stdc++.h> // header file include.
using namespace std;     // std라는 namespace사용.
// namespace: 라이브러리의 변수명 중복을 방지하기 위해 변수명에 범위를 걸어놓음.
// std::cin 형식으로 호출해야 하나, namespace를 설정했기 때문에, cin, cout 만으로 호출할 수 있음.
string a;

// 입력받은 문자열을 그대로 출력하는 프로그램.
int main()
{
    cin >> a;
    cout << a << "\n";
    return 0; // RETURN 0: 정상 종료
}