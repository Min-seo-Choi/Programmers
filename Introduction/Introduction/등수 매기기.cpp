#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���� ������ ���� ������ ��� ������ �������� �л����� ����� �ű���� �մϴ�. 
// ���� ������ ���� ������ ���� 2���� ���� �迭 score�� �־��� ��, 
// ���� ������ ���� ������ ����� �������� �ű� ����� ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(vector<vector<int>> score)
{
	vector<int> answer;
	vector<double> temp;
	vector<double> sortedTemp;

	for (auto pair : score)
	{
		temp.emplace_back((double)(pair[0] + pair[1]) / 2);
		sortedTemp.emplace_back((double)(pair[0] + pair[1]) / 2);
	}

	sort(sortedTemp.begin(), sortedTemp.end(), greater());

	for (int i = 0; i < sortedTemp.size(); i++)
	{
		answer.emplace_back(distance(sortedTemp.begin(), find(sortedTemp.begin(), sortedTemp.end(), temp[i])) + 1);
	}

	return answer;
}