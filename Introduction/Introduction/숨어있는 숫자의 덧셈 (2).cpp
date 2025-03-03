#include <string>
#include <vector>

using namespace std;

// 문자열 my_string이 매개변수로 주어집니다. 
// my_string은 소문자, 대문자, 자연수로만 구성되어있습니다. my_string안의 자연수들의 합을 return하도록 solution 함수를 완성해주세요.

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