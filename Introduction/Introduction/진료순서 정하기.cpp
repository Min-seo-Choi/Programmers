#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// �ܰ��ǻ� �Ӿ��̴� ���޽ǿ� �� ȯ���� ���޵��� �������� ���� ������ ���Ϸ��� �մϴ�. 
// ���� �迭 emergency�� �Ű������� �־��� �� ���޵��� ���� ������� ���� ������ ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(vector<int> emergency)
{
	vector<int> sorted = emergency;
	sort(sorted.begin(), sorted.end(), greater<int>());

	vector<int> answer;
	
	for (int i = 0; i < emergency.size(); i++)
	{
		answer.emplace_back(distance(sorted.begin(), find(sorted.begin(), sorted.end(), emergency.at(i))) + 1);
	}

	return answer;
}