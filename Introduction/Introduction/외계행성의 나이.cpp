#include <string>
#include <vector>

using namespace std;

// ���ֿ����� �ϴ� �Ӿ��̴� ���� �������� PROGRAMMERS-962 �༺�� �ҽ����ϰ� �ƽ��ϴ�. 
// �Ա��ɻ翡�� ���̸� ���ؾ� �ϴµ�, PROGRAMMERS-962 �༺������ ���̸� ���ĺ����� ���ϰ� �ֽ��ϴ�. 
// a�� 0, b�� 1, c�� 2, ..., j�� 9�Դϴ�. ���� ��� 23���� cd, 51���� fb�� ǥ���մϴ�. 
// ���� age�� �Ű������� �־��� �� PROGRAMMER-962�� ���̸� return�ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(int age)
{
	string strAge = to_string(age);
	string answer = "";

	for (char a : strAge)
	{
		answer += (a + 49);
	}

	return answer;
}