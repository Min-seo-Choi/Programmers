#include <string>
#include <vector>

using namespace std;

// �Ӿ��̳� ���ڰ��Դ� ���ڸ� �ϰ� �������� �߶��ݴϴ�.
// ���ڸ� �������� ����� �� n�� �־��� ��, ��� ����� ���ڸ� �� ���� �̻� �Ա� ���� �ʿ��� ������ ���� return �ϴ� solution �Լ��� �ϼ��� ������

int solution(int n)
{
	return n % 7 == 0 ? n / 7 : (n / 7) + 1;
}