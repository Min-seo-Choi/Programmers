#include <string>
#include <vector>

using namespace std;

// 문자열 my_string이 매개변수로 주어집니다. 
// my_string에서 중복된 문자를 제거하고 하나의 문자만 남긴 문자열을 return하도록 solution 함수를 완성해주세요.

string solution(string my_string) 
{
    string answer = "";

    for (char ch : my_string)
    {
        if (answer.empty() || answer.find(ch) == string::npos)
        {
            answer += ch;
        }
    }

    return answer;
}