#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���� �迭 array�� �Ű������� �־��� ��, 
// ���� ū ���� �� ���� �ε����� ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

vector<int> solution(vector<int> array)
{
	vector<int> answer;

	vector<int>::iterator iter = max_element(array.begin(), array.end());

	answer.emplace_back(*iter);
	int index = distance(array.begin(), iter);
	answer.emplace_back(index);

	return answer;
}