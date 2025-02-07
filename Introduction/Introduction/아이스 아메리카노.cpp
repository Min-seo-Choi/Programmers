#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� �߿� ������ ���̽� �Ƹ޸�ī�븸 ���ʴϴ�. ���̽� �Ƹ޸�ī��� ���ܿ� 5,500�� �Դϴ�.
// �Ӿ��̰� ������ �ִ� �� money�� �Ű������� �־��� ��, 
// �Ӿ��̰� �ִ�� ���� �� �ִ� �Ƹ޸�ī���� �� ���� ���� ���� ������� ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

vector<int> solution(int money)
{
	vector<int> answer;

	const int iceAmericano = 5500;
	int change = money;
	int count = 0;

	while (change >= iceAmericano)
	{
		change -= iceAmericano;
		count++;
	}

	answer.emplace_back(count);
	answer.emplace_back(change);

	return answer;
}