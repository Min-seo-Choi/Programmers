#include <string>
#include <vector>

using namespace std;

// �������� Ȥ�� ������ common�� �Ű������� �־��� ��, ������ ���� �������� �� ���ڸ� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<int> common)
{
	int as1 = common[1] - common[0];
	int as2 = common[2] - common[1];
	if (as1 == as2) return common[common.size() - 1] + as1;

	int gs1 = common[1] / common[0];
	int gs2 = common[2] / common[1];

	if (gs1 == gs2) return common[common.size() - 1] * gs1;
}