#include <string>
#include <vector>

using namespace std;

// �Ӿ��̳� ���ڰ��Դ� ���ڸ� ���� �������� �߶��ݴϴ�.
// ���ڸ� �������� ��� �� n�� �Ű������� �־��� ��,
// n���� �ֹ��� ���ڸ� ������ �ʰ� ��� ���� ���� ���� ������ �Ծ�� �Ѵٸ�
// �ּ� �� ���� ���Ѿ� �ϴ��� return �ϵ��� solution �Լ��� �ϼ��� ������.

int solution(int n) 
{
	int a = 6, b = n, c;

	while (b != 0) // ��Ŭ���� ȣ����
	{
		c = a % b;
		a = b;
		b = c;
	}

	int pieces = (6 * n) / a;

	return pieces / 6;
}