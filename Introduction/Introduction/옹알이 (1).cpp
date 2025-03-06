#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� �¾ �� 6���� �� ��ī�� ������ �ֽ��ϴ�. 
// ��ī�� ���� "aya", "ye", "woo", "ma" �� ���� ������ �ִ� �� ���� ����� ������(�̾� ����) �����ۿ� ���� ���մϴ�. 
// ���ڿ� �迭 babbling�� �Ű������� �־��� ��, �Ӿ����� ��ī�� ������ �� �ִ� �ܾ��� ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<string> babbling)
{
	int answer = 0;
	vector<string> speak = { "aya", "ye", "woo", "ma" };

	for (string babb : babbling)
	{
		for (string sp : speak)
		{
			if (babb.find(sp) != string::npos)
			{
				babb.replace(babb.find(sp), sp.length(), " ");
			}
		}

		int count = 0;
		for (char ch : babb)
			if (ch == ' ') count++;

		if (count == babb.size()) answer++;
	}

	return answer;
}