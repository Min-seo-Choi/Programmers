#include <string>
#include <vector>

using namespace std;

// ���� n�� �Ű������� �־��� ��, 
// n ������ Ȧ���� ������������ ��� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(int n)
{
	vector<int> answer;
	
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			answer.emplace_back(i);
	}

	return answer;
}