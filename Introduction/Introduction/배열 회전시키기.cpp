#include <string>
#include <vector>

using namespace std;

// 정수가 담긴 배열 numbers와 문자열 direction가 매개변수로 주어집니다. 
// 배열 numbers의 원소를 direction방향으로 한 칸씩 회전시킨 배열을 return하도록 solution 함수를 완성해주세요.

vector<int> solution(vector<int> numbers, string direction)
{
	vector<int> answer;

	if (direction == "right")
	{
		answer.emplace_back(numbers.at(numbers.size() - 1));
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			answer.emplace_back(numbers.at(i));
		}
	}
	else
	{
		for (int i = 1; i < numbers.size(); i++)
		{
			answer.emplace_back(numbers.at(i));
		}
		answer.emplace_back(numbers.at(0));
	}

	return answer;
}