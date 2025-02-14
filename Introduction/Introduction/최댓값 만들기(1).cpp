#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 정수 배열 numbers가 매개변수로 주어집니다. 
// numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.

int solution(vector<int> numbers) 
{
    int answer = 0;

    vector<int>::iterator iter = max_element(numbers.begin(), numbers.end());
    answer = *iter;
    numbers.erase(iter);

    iter = max_element(numbers.begin(), numbers.end());
    answer *= *iter;

    return answer;
}