#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� ����� ���� 7�� ���� �����մϴ�. 
// ���� �迭 array�� �Ű������� �־��� ��, 7�� �� �� �� �ִ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<int> array)
{
	int answer = 0;

	for (int arr : array)
	{
		for (char ch : to_string(arr))
		{
			if (ch != '7') continue;
			else answer++;
		}
	}

	return answer;
}