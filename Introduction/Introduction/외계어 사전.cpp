#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// PROGRAMMERS-962 �༺�� �ҽ����� ���ֺ���� �Ӿ��̴� �ܰ��༺�� �� �����Ϸ��� �մϴ�. 
// ���ĺ��� ��� �迭 spell�� �ܰ�� ���� dic�� �Ű������� �־����ϴ�. 
// spell�� ��� ���ĺ��� �ѹ����� ��� ����� �ܾ 
// dic�� �����Ѵٸ� 1, 
// �������� �ʴ´ٸ� 2�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<string> spell, vector<string> dic)
{
	int answer = 2;
	bool isFind = true;

	for (string di : dic)
	{
		for (string sp : spell)
		{
			isFind = (di.find(sp) != string::npos);
			if (!isFind) break;
		}

		if (isFind)
		{
			answer = 1;
			break;
		}
	}

	return answer;
}