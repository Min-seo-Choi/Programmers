#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���ڿ� before�� after�� �Ű������� �־��� ��, 
// before�� ������ �ٲپ� after�� ���� �� ������ 1��, ���� �� ������ 0�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(string before, string after)
{
	for (char ch : after)
	{
		if (before.find(ch) != string::npos) before.erase(before.find(ch), 1);
		else break;
	}

	return before.size() > 0 ? 0 : 1;
}