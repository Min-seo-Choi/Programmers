#include <string>
#include <vector>

using namespace std;

// ���ӵ� �� ���� ������ ���� 12�� �Ǵ� ���� 3, 4, 5�Դϴ�. 
// �� ���� num�� total�� �־����ϴ�. 
// ���ӵ� �� num���� ���� ���� total�� �� ��, ���� �迭�� ������������ ��� return�ϵ��� solution�Լ��� �ϼ��غ�����.

vector<int> solution(int num, int total)
{
	vector<int> answer;
	int start = total / num - (num - 1) / 2;

	for (int i = 0; i < num; i++)
	{
		answer.emplace_back(start + i);
	}

	return answer;
}

int main()
{
	solution(3, 12);
}