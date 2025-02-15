#include <string>
#include <vector>

using namespace std;

// 문자열 my_string이 매개변수로 주어집니다. 
// my_string안의 모든 자연수들의 합을 return하도록 solution 함수를 완성해주세요.

int solution(string my_string) 
{
    int answer = 0;

    for (char ms : my_string)
    {
        if (ms >= 48 && ms <= 57)
            answer += (ms - 48);
    }

    return answer;
}