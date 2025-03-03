#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 정수 배열 numbers가 매개변수로 주어집니다. 
// numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.

int solution(vector<int> numbers)
{
	int num1 = 0, num2 = 0;

	sort(numbers.begin(), numbers.end());

	num1 = numbers[0] * numbers[1];
	num2 = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];

	return max(num1, num2);
}