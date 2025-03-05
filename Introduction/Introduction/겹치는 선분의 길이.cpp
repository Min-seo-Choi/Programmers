#include <string>
#include <vector>

using namespace std;

// ���� 3���� �����ϰ� ���� �ֽ��ϴ�. 
// �� ������ ���۰� �� ��ǥ�� [[start, end], [start, end], [start, end]] ���·� ����ִ� 2���� �迭 lines�� �Ű������� �־��� ��, 
// �� �� �̻��� ������ ��ġ�� �κ��� ���̸� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<vector<int>> lines) {
	int answer = 0;
	vector<int> line(201, 0);

	for (auto pair : lines)
	{
		int start = pair[0] + 100;
		int end = pair[1] + 100;

		for (int i = start; i < end; i++)
		{
			line[i]++;
		}
	}

	for (int i = 0; i < 201; i++)
	{
		if (line[i] > 1) answer++;
	}

	return answer;
}