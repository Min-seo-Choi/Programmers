#include <string>
#include <vector>

using namespace std;

// 문자열 my_string과 정수 n이 매개변수로 주어질 때, 
// my_string에 들어있는 각 문자를 n만큼 반복한 문자열을 return 하도록 solution 함수를 완성해보세요.

string solution(string my_string, int n) 
{
    string answer = "";

    for (char character : my_string)
    {
        for (int i = 0; i < n; i++)
        {
            answer += character;
        }
    }

    return answer;
}