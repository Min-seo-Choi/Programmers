#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

// 영어 대소문자로 이루어진 문자열 my_string이 매개변수로 주어질 때, 
// my_string을 모두 소문자로 바꾸고 알파벳 순서대로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요.

string solution(string my_string) 
{
    string answer = "";

    for (char ch : my_string)
    {
        answer += tolower(ch);
    }

    sort(answer.begin(), answer.end());
    return answer;
}