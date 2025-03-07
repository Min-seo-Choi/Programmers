#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1���� 13������ ������, 1�� 1, 10, 11, 12, 13 �̷��� �� 6�� �����մϴ�. 
// ���� i, j, k�� �Ű������� �־��� ��, i���� j���� k�� �� �� �����ϴ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int i, int j, int k)
{
	int answer = 0;

	for (int num = i; num <= j; num++)
	{
		string numString = to_string(num);
		answer += count(numString.begin(), numString.end(), k + 48);
	}

	return answer;
}