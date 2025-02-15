#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���ڿ� my_string�� �Ű������� �־��� ��, 
// my_string �ȿ� �ִ� ���ڸ� ��� �������� ������ ����Ʈ�� return �ϵ��� solution �Լ��� �ۼ��غ�����.

vector<int> solution(string my_string)
{
	vector<int> answer;
	for (char ms : my_string)
	{
		if (ms >= 48 && ms <= 57)
			answer.emplace_back(ms - 48);
	}

	sort(answer.begin(), answer.end());

	return answer;
}

