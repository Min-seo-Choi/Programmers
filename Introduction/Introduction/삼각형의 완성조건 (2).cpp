#include <string>
#include <vector>

using namespace std;

// ���� �� ���� �ﰢ���� ����� ���ؼ��� ������ ���� ������ �����ؾ� �մϴ�.
// ���� �� ���� ���̴� �ٸ� �� ���� ������ �պ��� �۾ƾ� �մϴ�.
// �ﰢ���� �� ���� ���̰� ��� �迭 sides�� �Ű������� �־����ϴ�.
// ������ �� ���� �� �� �ִ� ������ ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> sides)
{
	int answer = 0;
	for (int i = 1; i < sides[0] + sides[1]; i++)
	{
		if (i + sides[0] > sides[1] && i + sides[1] > sides[0])
		{
			answer++;
		}
	}

	return answer;
}