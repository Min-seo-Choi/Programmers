#include <string>
#include <vector>

using namespace std;

// 문자열 my_string이 매개변수로 주어질 때, 대문자는 소문자로 소문자는 대문자로 변환한 문자열을 return하도록 solution 함수를 완성해주세요.

string solution(string my_string) 
{
    string answer = "";

    for (char ch : my_string)
    {
        if (ch >= 'A' && ch <= 'Z')
            answer += tolower(ch);
        else
            answer += toupper(ch);
    }

    return answer;
}