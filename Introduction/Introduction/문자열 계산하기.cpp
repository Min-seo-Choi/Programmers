#include <string>
#include <vector>

using namespace std;

// my_string은 "3 + 5"처럼 문자열로 된 수식입니다. 
// 문자열 my_string이 매개변수로 주어질 때, 수식을 계산한 값을 return 하는 solution 함수를 완성해주세요.

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