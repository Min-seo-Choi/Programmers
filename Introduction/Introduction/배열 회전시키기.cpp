#include <string>
#include <vector>

using namespace std;

// ������ ��� �迭 numbers�� ���ڿ� direction�� �Ű������� �־����ϴ�. 
// �迭 numbers�� ���Ҹ� direction�������� �� ĭ�� ȸ����Ų �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

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