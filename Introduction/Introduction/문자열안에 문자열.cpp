#include <string>
#include <vector>

using namespace std;

// ���ڿ� str1, str2�� �Ű������� �־����ϴ�. str1 �ȿ� str2�� �ִٸ� 1�� ���ٸ� 2�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(string str1, string str2)
{
	return str1.find(str2) != string::npos ? 1 : 2;
}