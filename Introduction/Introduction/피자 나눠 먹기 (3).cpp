#include <string>
#include <vector>

using namespace std;

// �Ӿ��̳� ���ڰ��Դ� ���ڸ� �� �������� �� �������� ���ϴ� ���� ���� �߶��ݴϴ�.
// ���� ���� �� slice�� ���ڸ� �Դ� ����� �� n�� �Ű������� �־��� ��,
// n ���� ����� �ּ� �� ���� �̻� ���ڸ� �������� �ּ� �� ���� ���ڸ� ���Ѿ� �ϴ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(int slice, int n) 
{
	int pizza = 0;

	while (pizza * slice < n)
	{
		pizza++;
	}

	return pizza;
}