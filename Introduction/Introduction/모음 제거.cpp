#include <string>
#include <vector>

using namespace std;

// ����� a, e, i, o, u �ټ� ���� ���ĺ��� �������� �з��մϴ�. 
// ���ڿ� my_string�� �Ű������� �־��� �� ������ ������ ���ڿ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(string my_string)
{
	string answer = "";
	string findStr = "aeiou";

	for (char ms : my_string)
	{
		bool isSame = false;
		for (char find : findStr)
		{
			if (find == ms)
			{
				isSame = true;
				break;
			}
		}
		if (!isSame) answer += ms;
	}

	return answer;
}