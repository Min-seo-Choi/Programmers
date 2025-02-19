#include <string>
#include <vector>

using namespace std;

// 정수 n이 매개변수로 주어질 때, n의 약수를 오름차순으로 담은 배열을 return하도록 solution 함수를 완성해주세요.

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) answer.emplace_back(i);
    }

    return answer;
}