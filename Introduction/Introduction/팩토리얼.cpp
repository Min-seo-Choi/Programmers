#include <string>
#include <vector>

using namespace std;

// i���丮�� (i!)�� 1���� i���� ������ ���� �ǹ��մϴ�. 
// ������� 5! = 5 * 4 * 3 * 2 * 1 = 120 �Դϴ�. 
// ���� n�� �־��� �� ���� ������ �����ϴ� ���� ū ���� i�� return �ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int n)
{
	int answer = 0;
	int factorial = 1;

	for (int i = 1; i <= 10; i++)
	{
		factorial *= i;
	
		if (n >= factorial) answer = i;
		else break;
	}

	return answer;
}
