#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���� �� ���� �ﰢ���� ����� ���ؼ��� ������ ���� ������ �����ؾ� �մϴ�.
// ���� �� ���� ���̴� �ٸ� �� ���� ������ �պ��� �۾ƾ� �մϴ�.
// �ﰢ���� �� ���� ���̰� ��� �迭 sides�� �Ű������� �־����ϴ�.
// �� ������ �ﰢ���� ���� �� �ִٸ� 1, ���� �� ���ٸ� 2�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> sides)
{
	int sum = 0;

	vector<int>::iterator iter = max_element(sides.begin(), sides.end());
	int max = *iter;
	sides.erase(iter);

	for (int side : sides)
	{
		sum += side;
	}

	return sum > max ? 1 : 2;
}