#include <bits/stdc++.h>
using namespace std;
int T;
string s;
// cin으로 T개의 getline을 받을 지 설정, T개 만큼 getline의 입력이 들어오는 상황이 있다.
// 그럴땐 특정 문자열을 기반으로 버퍼플래시를 하고 받아야 함.
// cin으로 입력을 받을 때, 개행문자 직전까지 입력을 받게 되고 이때문에 중간에 위치한 버퍼에 \n이 남기 때문.
// 버퍼의 개행문자를 없애주기 위해 getline(cin, bufferflush)를 해주어야 함.
int main()
{
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);
    for (int i = 0; i < T; i++)
    {
        getline(cin, s);
        cout << s << "\n";
    }
    return 0;
}