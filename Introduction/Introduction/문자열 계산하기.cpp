#include <string>
#include <vector>

using namespace std;

// my_string�� "3 + 5"ó�� ���ڿ��� �� �����Դϴ�. 
// ���ڿ� my_string�� �Ű������� �־��� ��, ������ ����� ���� return �ϴ� solution �Լ��� �ϼ����ּ���.

int solution(string my_string)
{
	int answer = 0;
	vector<int> nums;
	vector<string> oper;

	while (my_string.find(' ') != string::npos)
	{
		string temp = my_string.substr(0, my_string.find(' '));
		my_string = my_string.substr(my_string.find(' ') + 1);

		if (temp != "+" && temp != "-")
		{
			nums.emplace_back(stoi(temp));
		}
		else
		{
			oper.emplace_back(temp);
		}
	}

	nums.emplace_back(stoi(my_string));

	for (int i = 0; i < nums.size(); i++)
	{
		if (i == 0) answer += nums.at(i);
		else
		{
			if (oper.at(i - 1) == "+") answer += nums.at(i);
			else answer -= nums.at(i);
		}
	}

	return answer;
}