#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// �ֺ��� �־��� �� �߿��� ���� ���� ������ ���� �ǹ��մϴ�. 
// ���� �迭 array�� �Ű������� �־��� ��, �ֺ��� return �ϵ��� solution �Լ��� �ϼ��غ�����. 
// �ֺ��� ���� ���� -1�� return �մϴ�.

int solution(vector<int> array)
{
	sort(array.begin(), array.end());

	int num = -1, count = 0;
	map<int, int> result;

	for (int arr : array)
	{
		if (num == -1) num = arr;
		else if (num != arr)
		{
			result.insert({ num, count });

			num = arr;
			count = 0;
		}
		count++;
	}

	result.insert({ num, count });

	count = 0;
	int max = 0;
	bool isSame = false;

	for (auto res : result)
	{
		if (count < res.second)
		{
			max = res.first;
			count = res.second; 
			isSame = false;
		}
		else if (count == res.second) isSame = true;
	}

	return isSame ? -1 : max;
}