#include <string>
#include <vector>

using namespace std;

// ���ڿ� "hello"���� �� ���ڸ� ���������� �� ĭ�� �а� ������ ���ڴ� �� ������ �̵���Ű�� "ohell"�� �˴ϴ�. 
// �̰��� ���ڿ��� �δٰ� �����Ѵٸ� ���ڿ� A�� B�� �Ű������� �־��� ��, 
// A�� �о B�� �� �� �ִٸ� �о�� �ϴ� �ּ� Ƚ���� return�ϰ� �о B�� �� �� ������ -1�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(string A, string B)
{
	if (A == B) return 0;

	for (int i = 1; i <= A.size(); i++) {
		A = A.back() + A.substr(0, A.size() - 1); // ���������� �� ĭ ȸ��
		if (A == B) return i;
	}

	return -1;
}