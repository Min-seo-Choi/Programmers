#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� �Ű������� �־����ϴ�. 
// my_string�� �ҹ���, �빮��, �ڿ����θ� �����Ǿ��ֽ��ϴ�. my_string���� �ڿ������� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(string my_string)
{
	int answer = 0;
	string num = "";

	my_string += "a";
	for (char ch : my_string)
	{
		if (ch >= 48 && ch <= 57) num += ch;
		else
		{
			if (num == "") continue;

			answer += stoi(num);
			num = "";
		}
	}

	return answer;
}