#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// ���� n�� �������� n�� ����� ������ �����Ϸ��� �մϴ�. 
// �̶� n���κ����� �Ÿ��� ���ٸ� �� ū ���� �տ� ������ ��ġ�մϴ�. 
// ������ ��� �迭 numlist�� ���� n�� �־��� �� numlist�� ���Ҹ� n���κ��� ����� ������� ������ �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(vector<int> numlist, int n)
{
	vector<int> answer;

	while (numlist.size() > 0)
	{
		vector<int>::iterator iter = find(numlist.begin(), numlist.end(), n);
		if (iter != numlist.end())
		{
			answer.emplace_back(*iter);
			numlist.erase(iter);
		}

		vector<int> temp;

		for (int i = 0; i < numlist.size(); i++)
		{
			if (temp.empty()) temp.emplace_back(numlist[i]);
			else
			{
				if (abs(temp[0] - n) > abs(numlist[i] - n))
				{
					temp.clear();
					temp.emplace_back(numlist[i]);
				}
				else if (abs(temp[0] - n) == abs(numlist[i] - n))
				{
					temp.emplace_back(numlist[i]);
				}
			}
		}
		sort(temp.begin(), temp.end(), greater());

		for (int num : temp)
		{
			answer.emplace_back(num);
			iter = find(numlist.begin(), numlist.end(), num);
			numlist.erase(iter);
		}
	}

	return answer;
}