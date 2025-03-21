#include <string>
#include <vector>

using namespace std;

// 정수 n과 정수 배열 numlist가 매개변수로 주어질 때, 
// numlist에서 n의 배수가 아닌 수들을 제거한 배열을 return하도록 solution 함수를 완성해주세요.

vector<int> solution(int n, vector<int> numlist) 
{
    vector<int> answer;

    for (int num : numlist)
    {
        if (num % n == 0)
        {
            answer.emplace_back(num);
        }
    }

    return answer;
}