#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���ڿ� s�� �Ű������� �־����ϴ�. 
// s���� �� ���� �����ϴ� ���ڸ� ���� ������ ������ ���ڿ��� return �ϵ��� solution �Լ��� �ϼ��غ�����. 
// �� ���� �����ϴ� ���ڰ� ���� ��� �� ���ڿ��� return �մϴ�.

string solution(string s)
{
	string answer = "";

	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++)
	{
		if (i + 1 >= s.size()) answer += s[i];

		for (int j = i + 1; j < s.size(); j++)
		{
			if (s[i] == s[j]) i = s.rfind(s[i]);
			else answer += s[i];

			break;
		}
	}

	return answer;
}