#include <string>
#include <vector>

using namespace std;

// 정수 배열 numbers가 매개변수로 주어집니다.
// number의 각 원소에 두배한 원소를 가진 배열을 return 하도록 solution 함수를 완성해 주세요.

vector<int> solution(vector<int> numbers)
{
	vector<int> answer;
	for (auto re : numbers)
	{
		answer.emplace_back(re * 2);
	}

	return answer;
}