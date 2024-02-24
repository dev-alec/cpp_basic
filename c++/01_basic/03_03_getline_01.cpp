#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    getline(cin, s); // getline함수는 기본적으로 개행문자를 줄의 끝으로 인식하고 그 개행문자 직전까지 입력을 받는다.
    // 다른 종결 문자를 사용하여 입력을 받고 싶을 때, getline(cin,line,'.'); 와 같이 세 번째 인자로 전달하면 된다.
    cout << s << '\n';
    return 0;
}