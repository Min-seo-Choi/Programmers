#include <string>
#include <vector>

using namespace std;

// ���� �迭 numbers�� �Ű������� �־����ϴ�.
// number�� �� ���ҿ� �ι��� ���Ҹ� ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��� �ּ���.

vector<int> solution(vector<int> numbers)
{
	vector<int> answer;
	for (auto re : numbers)
	{
		answer.emplace_back(re * 2);
	}

	return answer;
}